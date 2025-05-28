#include"sophuc.h"
void SOPHUC:: Nhap() {
	cout << "Nhap phan thuc: ";
	cin >> a;
	cout << "Nhap phan ao: ";
	cin >> b;
}
void SOPHUC::Xuat() {
	if (b == 0) cout <<  a;
	else if (a == 0)cout << b << "i";
	else if (b > 0) cout << a << "+" << b << "i";
	else cout << a << b << "i";
}
void SOPHUC::SetAB(double a,double b) {
	this->a = a;
	this->b = b;
}
double  SOPHUC::GetA() {
	return a;
}
double SOPHUC::GetB() {
	return b;
}
SOPHUC SOPHUC::operator+(SOPHUC& p1){
	SOPHUC p;
	p.a = this->a + p1.a;
	p.b = this->b + p1.b;
	return p;
}
SOPHUC SOPHUC::operator-(SOPHUC& p1) {
	SOPHUC p;
	p.a = this->a - p1.a;
	p.b = this->b - p1.b;
	return p;
}
SOPHUC SOPHUC::operator*(SOPHUC& p1) {
	SOPHUC p;
	p.a = this->a * p1.a - this->b * p1.b;
	p.b = this->a * p1.b + this->b * p1.a;
	return p;
}
SOPHUC SOPHUC ::operator/(SOPHUC& p1) {
	SOPHUC p;
	p.a = (this->a * p1.a + this->b * p1.b) / (pow(p1.a, 2) + pow(p1.b, 2));
	p.b = (p1.a * this->b - this->a * p1.b) / (pow(p1.a, 2) + pow(p1.b, 2));
	return p;
}
SOPHUC::SOPHUC() {
	a = 0;
	b = 0;
}
SOPHUC::SOPHUC(double a) {
	this->a = a;
	b = 0;
}
SOPHUC::SOPHUC(double a, double b) {
	this->a = a;
	this->b = b;
}
SOPHUC::~SOPHUC() {
}
