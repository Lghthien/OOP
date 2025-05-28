#include"Diem3Cmaubai4.h"
int D3CMAU4::dem = 0;
D3CMAU4::D3CMAU4(double x , double y , double z , int r , int g , int b ):D3C(x,y,z),MAU(r,g,b){
	cout << "Da tao 1 diem 3 chieu mau ==> co " << ++dem << " Diem 3CMAU.";
	cout << endl;
}
D3CMAU4::~D3CMAU4(){
	cout << "Da huy 1 diem 3 chieu mau ==> co " << --dem << " Diem 3CMAU.";
	cout << endl;
}
int D3CMAU4::getDem() {
	return dem;
}
bool D3CMAU4::KiemTraDiemTrungNhau(const D3CMAU4& d){
	if (D3C::KiemTraDiemTrungNhau(d) && MAU::KiemTraDiemTrungNhau(d)) return true;
	else return false;
}
void D3CMAU4::Nhap(){
	D3C::Nhap();
	MAU::Nhap();
}
void D3CMAU4::Xuat(){
	D3C::Xuat();
	cout << " - ";
	MAU::Xuat();
}
istream& operator >> (istream& in, D3CMAU4& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, D3CMAU4& d){
	d.Xuat();
	return out;
}