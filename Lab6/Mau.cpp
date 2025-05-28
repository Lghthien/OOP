#include"Mau.h"
int MAU::dem = 0;
MAU::~MAU(){
	cout << "Da huy 1 diem mau  ==> co " << --dem << "Diem MAU.";
	cout << endl;
}
MAU::MAU(int r , int g, int b):r(r),g(g),b(b){
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
	cout << "Da tao 1 diem mau  ==> co " << ++dem << "Diem MAU.";
	cout << endl;
}
int MAU::getR(){
	return r;
}
int MAU::getG(){
	return g;
}
int MAU::getB(){
	return b;
}
void MAU::setR(int r){
	this->r = r;
}
void MAU::setG(int g){
	this->g = g;
}
void MAU::setB(int b){
	this->b = b;
}
void MAU::setRGB(int r, int g, int b){
	this->r = r;
	this->g = g;
	this->b = b;
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
}
int MAU::getDem(){
	return dem;
}
bool MAU::KiemTraDiemTrungNhau(const MAU& d1){
	if (r == d1.r && g == d1.g && b == d1.b) return true;
	else return false;
}
void MAU::Nhap(){
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
void MAU::Xuat(){
	cout<<"diem co bang mau(" << r << ", " << g << ", " << b << ")";
}
istream& operator >> (istream& in, MAU& d1){
	d1.Nhap();
	return in;
}
ostream& operator << (ostream& out , MAU& d1){
	d1.Xuat();
	return out;
}