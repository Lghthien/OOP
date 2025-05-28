#include"NhanVienHopDong.h"
NVHD::NVHD(int ma, string ten, string phong, double tc, double snc, double hsvg):NV(ma,ten,phong),tc(tc),snc(snc),hsvg(hsvg) {
	while (this->tc < 0) {
		cout << "Vui long nhap lai tien cong (>=0): ";
		cin >> this->tc;
	}
	while (this->snc < 0) {
		cout << "Vui long nhap lai so ngay cong (>=0) : ";
		cin >> this->snc;
	}
	while (this->hsvg < 0) {
		cout << "Vui long nhap lai he so vuot gio (>=0) : ";
		cin >> this->hsvg;
	}
}
NVHD::~NVHD(){}
void NVHD::Nhap(){
	NV::Nhap();
	cout << "Vui long nhap tien cong (>=0): ";
	cin >> tc;
	while (tc < 0) {
		cout << "Vui long nhap lai tien cong (>=0): ";
		cin >> tc;
	}
	cout << "Vui long nhap so ngay cong (>=0): ";
	cin >> snc;
	while (snc < 0) {
		cout << "Vui long nhap lai so ngay cong (>=0): ";
		cin >> snc;
	}
	cout << "Vui long nhap he so vuot gio (>=0): ";
	cin >> hsvg;
	while (hsvg < 0) {
		cout << "Vui long nhap lai he so vuot gio (>=0): ";
		cin >> hsvg;
	}
}
void NVHD::Xuat(){
	NV::Xuat();
	cout << "Tien cong: " << tc << "\n";
	cout << "So ngay cong: " << snc << "\n";
	cout << "He so vuot gio: " << hsvg << "\n";
}
istream& operator >> (istream& in, NVHD& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, NVHD& d){
	d.Xuat();
	return out;
}
double NVHD::getTienCong(){
	return tc;
}
void NVHD::setTienCong(int tc){
	this->tc = tc;
	while (this->tc < 0) {
		cout << "Vui long nhap lai tien cong (>=0): ";
		cin >> this->tc;
	}
}
double NVHD::getSoNgayCong(){
	return snc;
}
void NVHD::setSoNgayCong(int snc){
	this->snc = snc;
	while (this->snc < 0) {
		cout << "Vui long nhap lai so ngay cong (>=0) : ";
		cin >> this->snc;
	}}
double NVHD::getHeSoVuotGio(){
	return hsvg;
}
void NVHD::setHeSoVuotGio(int hsvg){
	this->hsvg = hsvg;
	while (this->hsvg < 0) {
		cout << "Vui long nhap lai he so vuot gio (>=0) : ";
		cin >> this->hsvg;
	}
}
int NVHD::getLuong(){
	return tc * snc * (1 + hsvg);
}
string NVHD::getLoai(){
	return "NVHD";
}