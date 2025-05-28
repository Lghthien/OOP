#include"NhanVienBienChe.h"
NVBC::NVBC(int ma, string ten, string phong, double hsl, double hspc) :NV(ma, ten, phong), hsl(hsl), hspc(hspc) {
	while (this->hsl < 0) {
		cout << "Vui long nhap lai he so luong  (>=0): ";
		cin >> this->hsl;
	}
	while (hspc < 0) {
		cout << "Vui long nhap lai he so phu cap chuc vu (>=0): ";
		cin >> this->hspc;
	}
}
NVBC::~NVBC(){}
istream& operator >> (istream& in, NVBC& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, NVBC& d){
	d.Xuat();
	return out;
}
void NVBC::Nhap(){
	NV::Nhap();
	cout << "Vui long nhap he so luong (>=0): ";
	cin >> hsl;
	while (hsl < 0) {
		cout << "Vui long nhap lai he so luong  (>=0): ";
		cin >> hsl;
	}
	cout << "Vui long nhap he so phu cap chuc vu  (>=0): ";
	cin >> hspc;
	while (hspc < 0) {
		cout << "Vui long nhap lai he so phu cap chuc vu  (>=0): ";
		cin >> hspc;
	}
}
void NVBC::Xuat(){
	NV::Xuat();
	cout << "He so luong: "<<hsl<<"\n";
	cout << "He so phu cap chuc vu: " << hspc << "\n";
}
double NVBC::getHeSoLuong(){
	return hsl;
}
void NVBC::setHeSoLuong(int hsl){
	this->hsl = hsl;
	while (this->hsl < 0) {
		cout << "Vui long nhap lai he so luong  (>=0): ";
		cin >> this->hsl;
	}
}
double NVBC::getHeSoPhuCap(){
	return hspc;
}
void NVBC::setHeSoPhuCap(int hspc){
	this->hspc = hspc;
	while (this->hspc < 0) {
		cout << "Vui long nhap lai he so phu cap chuc vu (>=0): ";
		cin >> this->hspc;
	}
}
int NVBC::getLuong(){
	return int((1 + hsl + hspc) * 1000);
}
string NVBC::getLoai(){
	return "NVBC";
}