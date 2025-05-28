#include"phanso.h"
void PHANSO::Nhap() {
	cout << "Nhap tu so: ";
	cin >> ts;
	do {
		cout << "Nhap mau so(khac 0): ";
		cin >> ms;
	} while (ms == 0);
}
double PHANSO::QuiDoisoThuc() {
	double a;
	a =(double) ts / ms;
	return a;
}
int PHANSO::TimUCLN() {
	int a = ts, b = ms;
	if (a == 0 && b == 0) return 1;
	if (a == 0 || b == 0) return a + b;
	a = abs(a);
	b = abs(b);
	while (a != b) {
		if (a > b) a -= b;
		else b -= a;
	}
	return a;
}
void PHANSO::Xuly() {
    int x = TimUCLN();
	ts /= x;
	ms /= x;
}
void PHANSO::Xuat() {
	if (ms < -1) cout << -ts << "/" << -ms;
	else if (ms == -1) cout << -ts;
	else if (ms == 0) cout << "phan so khong xac dinh";
	else if (ms == 1) cout << ts;
	else cout << ts << "/" << ms;
}
void PHANSO::SetTsMs(int ts, int ms) {
	this->ts = ts;
	if (ms != 0) {
		this->ms = ms;
	}
	else this->ms = 1;
}
int PHANSO::GetTs() {
	return ts;
}
int PHANSO::GetMs() {
	return ms;
}
PHANSO PHANSO::operator +(PHANSO& p1) {
	PHANSO p;
	p.ts = this->ts * p1.ms + this->ms * p1.ts;
	p.ms = this->ms * p1.ms;
	return p;
}
PHANSO PHANSO:: operator -(PHANSO& p1) {
	PHANSO p;
	p.ts = this->ts * p1.ms - this->ms * p1.ts;
	p.ms = this->ms * p1.ms;
	return p;
}
PHANSO PHANSO:: operator * (PHANSO& p1) {
	PHANSO p;
	p.ts = this->ts * p1.ts;
	p.ms = this->ms * p1.ms;
	return p;
}
PHANSO PHANSO:: operator / (PHANSO& p1) {
	PHANSO p;
	p.ts = this->ts * p1.ms;
	p.ms = this->ms * p1.ts;
	return p;
}
PHANSO::PHANSO() {
	ts = 0;
	ms = 1;
}
PHANSO::PHANSO(int ts) {
	this -> ts = ts;
	ms = 1;
}
PHANSO::PHANSO(int ts, int ms) {
	this->ts = ts;
	this->ms = ms;
 }
PHANSO::~PHANSO() {
}
