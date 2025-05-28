#include"Mang2Chieu.h"
M2C::M2C() :sc(0),sd(0),p(nullptr){}
M2C::M2C(int sc, int sd){
	while (sc < 1 || sd < 1) {
		cout << "Vui long nhap so cot: ";
		cin >> sc;
		cout << "Vui long nhap so dong: ";
		cin >> sd;
	}
	this->sc = sc;
	this->sd = sd;
	p = new int* [this->sd];
	for (int i = 0;i < this->sd;i++) {
		p[i] = new int[this->sc];
	}
	for (int i = 0;i < this->sd;i++)
		for (int j = 0;j < this->sc;j++) p[i][j] = 0;
}
M2C::M2C(const M2C& x){
	sd = x.sd;
	sc = x.sc;
	p = new int* [sd];
	for (int i = 0;i < sd;i++) {
		p[i] = new int[sc];
	}
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) p[i][j] = x.p[i][j];
	}
}
M2C::~M2C(){
	for (int i = 0;i < sd;i++) {
		delete[]p[i];
	}
	delete[]p;
}
int M2C::GetDong(){
	return sd;
}
int M2C::GetCot(){
	return sc;
}
istream& operator >> (istream& in, M2C& x){
	do {
		cout << "Vui long nhap so cot (>0): ";
		cin >> x.sc;
		cout << "Vui long nhap so dong (>0): ";
		cin >> x.sd;
	}while (x.sc < 1 || x.sd < 1);
	x.p = new int* [x.sd];
	for (int i = 0;i < x.sd;i++) {
		x.p[i] = new int[x.sc];
	}
	for (int i = 0;i < x.sd;i++) {
		for (int j = 0;j < x.sc;j++) {
			cout << "Nhap a[" << i + 1 << "][" << j + 1 << "]: ";
			in>>x.p[i][j];
		}
	}
	return in;
}
ostream& operator << (ostream& out, M2C& x){
	for (int i = 0;i < x.sd;i++) {
		for (int j = 0;j < x.sc;j++) {
			out << x.p[i][j] << " ";
		}
		out << endl;
	}
	return out;
}
void M2C::tu_dong_phat_sinh_phan_tu_mang(){
	srand(time(0));
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) {
			p[i][j] = -30 + (int)(rand() * (30 + 30 + 1.0) / (1.0 + RAND_MAX));
		}
	}
}
bool M2C::Checksonguyento(int x){
	if (x < 2) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2;i <= sqrt(x);i++) {
			if (x % i == 0) return false;
		}
	}
	return true;
}
void M2C::LietKeSoNguyenTo(){
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) {
			if (Checksonguyento(p[i][j])) {
				cout << p[i][j] << " ";
			}
		}
	}
}
bool M2C::Checksochinhphuong(int x){
	int t = sqrt(x);
	return (t * t == x);
}
int M2C::DemSoLuongSoChinhPhuong(){
	int dem = 0;
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) {
			if (Checksochinhphuong(p[i][j])){
				dem++;
			}
		}
	}
	return dem;
}
bool M2C::CheckSoHoanThien(int x){
	int tong = 0;
	for (int i = 1;i < x;i++) {
		if (x % i == 0) tong += i;
	}
	return (tong == x);
}
long M2C::TinhTongSoHoanThienTrenDong(){
	int dong;
	long tong = 0;
	do {
		cout << "Nhap dong ban muon chon ";
		cin >> dong;
	} while (dong<1 || dong>sd);
		for (int j = 0;j < sc;j++) {
			if (CheckSoHoanThien(p[dong - 1][j])) tong += p[dong - 1][j];
		}
    return tong;
}
bool M2C::CheckSoDoiXung(int x){
	int reversed = 0;
	int temp = x;
	while (temp != 0) {
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	return x == reversed;
}
double M2C::TinhTBCongSoDoiXung(){
	double tbc = 0;
	long tong=0;
	int dem = 0;
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) {
			if (CheckSoDoiXung(p[i][j])) {
				dem++;
				tong += p[i][j];
			}
		}
	}
	tbc = (double)tong / dem;
	return tbc;
}
void M2C::XapSepTangDanPhanTuDongK(){
	int dong;
	do {
		cout << "Nhap dong ban muon chon ";
		cin >> dong;
	} while (dong<1 || dong>sd);
	for (int i = 0;i < sc - 1;i++) {
		int min = i;
		for (int j = i + 1;j < sc;j++) {
			if (p[dong-1][j] < p[dong - 1][min]) min = j;
		}
		swap(p[dong - 1][min], p[dong - 1][i]);
	}
	cout << "Ma tran sau khi duoc sap theo thu tu tang dan la: \n";
	for (int i = 0;i < sd;i++) {
		for (int j = 0;j < sc;j++) {
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}