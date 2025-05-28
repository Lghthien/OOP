#include"GiaiPT1.h"
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
PT1::~PT1() {}
void PT1::GiaiPt() {
	if (b == 0 && c == 0) cout << "He vo so nghiem";
	else if (b == 0 && c != 0) cout << "He vo nghiem";
	else (c==0)?cout <<"PT co nghiem x=0": cout << "PT co nghiem x="<<-c/b;
}
istream& operator >> (istream& in, PT1& x) {
	cout << "Nhap he so a: ";in >> x.b;
	cout << "nhap he so b: ";in >> x.c;
	return in;
}
ostream& operator << (ostream& out, PT1& x) {
	if (x.b == 0) cout << "0x";
	else if (x.b == 1) cout << "x";
	else cout << x.b << "x";
	if (x.c == 0) cout << " = 0 => ";
	else if (x.c > 0) cout << "+" << x.c<<" = 0 => ";
	else cout << x.c << " = 0 => ";
	x.GiaiPt();
	return out;
}
