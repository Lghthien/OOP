#include"GiaiPT.h"
PT1::PT1() {
	b = 0;
	c = 0;
}
PT1::PT1(double c) {
	b = 0;
	this->c = c;
}
PT1::PT1(double b,double c) {
	this->b = b;
	this->c = c;
}
PT1::~PT1() {

}
void PT1::Nhap() {
	cout << "Nhap he so a: ";cin >> b;
	cout << "nhap he so b: ";cin >> c;
}
void PT1::GiaiPt() {
	if (b == 0 && c == 0) cout << "He vo so nghiem";
	else if (b == 0 && c != 0) cout << "He vo nghiem";
	else cout << -c / b;
}
void PT1::Xuat() {
	cout << "Nghiem phuong trinh bat 1 la: ";GiaiPt();
}

void PT2::Nhap() {
	cout << "Nhap he so a: ";cin >> a;
	cout << "nhap he so b: ";cin >> b;
	cout << "nhap he so c: ";cin >> c;
	
}
void PT2::GiaiPt() {
	if (a == 0) {
		PT1 x(b, c);
		x.GiaiPt();
	}
	else if (a != 0) {
		double denta = (b * b) - (4 * a * c);
		if (denta > 0) {
			double x1 = (-b + sqrt(denta)) / (2 * a);
			double x2 = (-b - sqrt(denta)) / (2 * a);
			cout << "x1 = " << x1<<endl;
			cout << "x2 = " << x2;
		}
		else if (denta == 0) {
			double x0 = -b / (2 * a);
			cout << "x = " << x0;
		}
		else cout << "phuong trinh vo nghiem: ";
	}
}
void PT2::Xuat() {
	cout << "Nghiem phuong trinh bat 2 la: "<<endl;GiaiPt();
}
PT2::PT2(double a = 0, double b = 0, double c = 0) {
	this->a = a;
	this->b = b;
	this->c = c;
}
PT2::PT2() {
	a = 0;
	b = 0;
	c = 0;
}
PT2::~PT2() {
}