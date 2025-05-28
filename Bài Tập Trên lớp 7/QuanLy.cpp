#include"QuanLy.h"
QL::QL():p(NULL),sl(0){}
QL::~QL(){
	if (p != NULL) {
		for (int i= 0;i < sl;i++) {
			delete[]p[i];
		}
		delete[]p;
	}
}
int QL::getSoLuong(){
	return sl;
}
void QL::Nhap(){
	int loai;
	cout << "Vui long nhap so luong doi tuong (>0): ";
	cin >> sl;
	while (sl <= 0) {
	cout << "Vui long nhap lai so luong doi tuong (>0): ";
	cin >> sl;
}
     p  = new DT *[sl];
for (int i = 0;i < sl;i++) {
	cout << "------------------------------------------------\n";
	cout << "Vui long nhap thong tin doi tuong thu " << i + 1 << ": \n";
	cout << "1.Hoc sinh \n";
	cout << "2.Sinh vien \n";
	cout << "3.Cong Nhan \n";
	cout << "4.Ca si, nghe si\n";
	do {
		cin >> loai;
	} while (loai < 1 || loai>4);
	if (loai == 1) {
		p[i] = new HS;
	}
	else if(loai==2) {
		p[i] = new SV;
	}
	else if (loai == 3) {
		p[i] = new CN;
	}
	else if (loai == 4) {
		p[i] = new NS;
	}
	p[i]->Nhap();
}
}
void QL::Xuat(){
	for (int i = 0;i < sl;i++) {
		p[i]->Xuat();
		cout << "\n";
	}
}
istream& operator >> (istream& in, QL& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, QL& d){
	d.Xuat();
	return out;
}