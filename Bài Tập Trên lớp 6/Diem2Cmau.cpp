#include"Diem2Cmau.h"
int D2CMAU::dem = 0;
D2CMAU::~D2CMAU(){
	cout << "Da huy 1 diem 2 chieu mau ==> co " << --dem << " Diem 2CMAU.";
	cout << endl;
}
D2CMAU::D2CMAU(double x , double  y, int r, int g, int b):D2C(x,y),MAU(r,b,g){
	cout << "Da tao 1 diem 2 chieu mau ==> co " << ++dem << " Diem 2CMAU.";
	cout << endl;
}
bool D2CMAU::KiemTraDiemTrungNhau(const D2CMAU& d){
	if (D2C::KiemTraDiemTrungNhau(d) && MAU::KiemTraDiemTrungNhau(d)) return true;
	else return false;
}
void D2CMAU::Nhap(){
	D2C::Nhap();
	MAU::Nhap();
}
void D2CMAU::Xuat(){
	D2C::Xuat();
	cout << " - ";
	MAU::Xuat();
}
istream& operator >> (istream& in, D2CMAU& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, D2CMAU& d){
	d.Xuat();
	return out;
}
int D2CMAU::getDem(){
	return dem;
}