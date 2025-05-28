#include"Diem3Cmau.h"
int D3CMAU:: dem = 0;
D3CMAU::D3CMAU(double x , double y , double z , int r , int g , int b ):D3C(x,y,z),r(r),g(g),b(b){
	while (this->r < 0 || this->r >255) {
		cout << "vui long nhap lai r: ";
		cin >> this->r;
	}
	while (this->g < 0 || this->g >255) {
		cout << "vui long nhap lai g: ";
		cin >> this->g;
	}
	while (this->b < 0 || this->b >255) {
		cout << "vui long nhap lai b: ";
		cin >> this->b;
	}
	cout << "Da tao 1 diem 3 chieu mau  ==> co " << ++dem << " Diem 3CMAU.";
	cout << endl;
}
D3CMAU::~D3CMAU(){
	cout << "Da huy 1 diem 3 chieu mau ==> co " << --dem << " Diem 3CMAU.";
	cout << endl;
}
int D3CMAU::getR(){
	return r;
}
int D3CMAU::getG(){
	return g;
}
int D3CMAU::getB(){
	return b;
}
void D3CMAU::setR(int r){
	if (r >= 0 && r <= 255) {
		this->r = r;
	}
}
void D3CMAU::setG(int g){
	if (g >= 0 && g <= 255) {
		this->g = g;
	}
}
void D3CMAU::setB(int b){
	if (b >= 0 && b <= 255) {
		this->b = b;
	}
}
int D3CMAU::getDem(){
	return dem;
}
bool D3CMAU::KiemTraDiemTrungNhau(const D3CMAU& d1){
	if (D3C::KiemTraDiemTrungNhau(d1)) {
		if (r == d1.r && g == d1.g && b == d1.b) return true;
		else return false;
	}
	else return false;
}
void D3CMAU::Nhap(){
	D3C::Nhap();
	cout << "Vui long nhap r: ";cin >> this->r;
	while (this->r < 0 || this->r >255) {
		cout << "vui long nhap lai r: ";
		cin >> this->r;
	}
	cout << "Vui long nhap g: ";cin >> this->g;
	while (this->g < 0 || this->g >255) {
		cout << "vui long nhap lai g: ";
		cin >> this->g;
	}
	cout << "Vui long nhap b: ";cin >> this->b;
	while (this->b < 0 || this->b >255) {
		cout << "vui long nhap lai b: ";
		cin >> this->b;
	}
}
void D3CMAU::Xuat(){
	D3C::Xuat();
	cout << " - co bang mau (" << r << ", " << g << ", " << b << " )";
}
istream& operator >> (istream& in, D3CMAU& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, D3CMAU& d){
	d.Xuat();
	return out;
}