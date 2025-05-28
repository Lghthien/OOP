#include"GiaiPT2.h"
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
			cout << "x1 = " << x1 << "\t";
			cout << "x2 = " << x2;
		}
		else if (denta == 0) {
			double x0 = -b / (2 * a);
			cout << "x = " << x0;
		}
		else cout << "phuong trinh vo nghiem: ";
	}
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
istream& operator >>(istream& in, PT2& x) {
	cout << "Nhap he so a: ";in >> x.a;
	cout << "nhap he so b: ";in >> x.b;
	cout << "nhap he so c: ";in >> x.c;
	return in;
}
ostream& operator <<(ostream& out, PT2& x) {
	if (x.a == 0) cout << "";
	else if (x.a == -1) cout << "-(x^2)";
	else if (x.a == 1) cout << "(x^2)";
	else cout << x.a << "(x^2)";
	if (x.b == 0) cout << "";
	else if (x.b == 1) cout << "+x";
	else if (x.b == -1) cout << x.b << "-x";
	else if (x.b > 1) cout << "+" << x.b << "x";
	else cout << x.b << "x";
	if (x.c == 0) cout << " = 0 => ";
	else if (x.c > 0) cout << "+" << x.c << " = 0 => ";
	else cout << x.c << " = 0 => ";
	x.GiaiPt();
	return out;
}