#include "DanhSach.h"
DS::DS():p(NULL),sl(0){}
DS::~DS(){
	if (p != NULL) {
		for (int i = 0;i < sl;i++) {
			delete[]p[i];
		}
		delete[]p;
	}
}
int DS::getSoLuong(){
	return sl;
}
void DS::Nhap(){
	int t;
	cout << "Vui long nhap so luong ve: ";
	cin >> sl;
	p = new VE *[sl];
	for (int i = 0;i < sl;i++) {
		cout << endl;
		cout << "Vui long chon loai ve thu "<<i+1<<":\n1.Ve tron goi\n2.Ve tung phan\n";
		cin >> t;
		while (t < 1 || t>2) {
			cout << "Vui long chon lai: ";
			cin >> t;
		}
		if (t == 1) {
			p[i] = new VTG;
		}
		else {
			p[i] = new VTP;
		}
		p[i]->Nhap();
		
	}
}
void DS::Xuat(){
	if (sl == 0) cout << "Khong co ve trong danh sach";
	else {
		cout << "Cac ve co trong danh sach la: \n\n";
		for (int i = 0;i < sl;i++) {
			p[i]->Xuat();
			cout << endl;
		}
	}
}
istream& operator >> (istream& in, DS& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, DS& d){
	d.Xuat();
	return out;
}
long long DS::TongTienVe(){
	int tong=0;
	for (int i = 0;i < sl;i++) {
		tong += p[i]->getGia();
	}
	return tong;
}
int DS::SoVeTungPhan(){
	int dem = 0;
	for (int i = 0;i < sl;i++) {
		if (p[i]->getLoai() == "ve tung phan") dem++;
	}
	return dem;
}