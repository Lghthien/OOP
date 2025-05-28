#include"PhanSo.h"
PHANSO::PHANSO() {
	ts = 0;
	ms = 1;
}
PHANSO::PHANSO(int ts) {
	this->ts = ts;
	ms = 1;
}
PHANSO::PHANSO(int ts, int ms) {
	this->ts = ts;
	this->ms = ms;
}
PHANSO::~PHANSO() {
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
	a = (double)ts / ms;
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

PHANSO operator +(const PHANSO& p1, const PHANSO& p2) {
	return PHANSO(p1.ts * p2.ms + p1.ms * p2.ts, p1.ms * p2.ms);
}
PHANSO operator -(const PHANSO& p1, const PHANSO& p2) {
	return PHANSO(p1.ts * p2.ms - p1.ms * p2.ts, p1.ms * p2.ms);
}
PHANSO operator *(const PHANSO& p1, const PHANSO& p2) {
	return PHANSO(p1.ts * p2.ts, p1.ms * p2.ms);
}
PHANSO operator /(const PHANSO& p1, const PHANSO& p2) {
	return PHANSO(p1.ts * p2.ms, p1.ms * p2.ts);
}
istream& operator >> (istream& in, PHANSO& p) {
	cout << "Nhap tu so: ";
	cin >> p.ts;
	do {
		cout << "Nhap mau so(khac 0): ";
		cin >> p.ms;
	} while (p.ms == 0);
	return in;
}
ostream& operator << (ostream& out, PHANSO& p) {
	int x = p.TimUCLN();
	p.ts /= x;
	p.ms /= x;
	if (p.ms < -1) cout << -p.ts << "/" << -p.ms;
	else if (p.ms == -1) cout << -p.ts;
	else if (p.ms == 0) cout << "phan so khong xac dinh";
	else if (p.ms == 1) cout << p.ts;
	else cout << p.ts << "/" << p.ms;
	return out;
}
PHANSO PHANSO:: operator++() {
	ts = ts + ms;
	return *this;
}
PHANSO PHANSO:: operator++(int) {
	PHANSO pst(ts, ms);
	ts = ts + ms;
	return pst;
}
PHANSO PHANSO:: operator--() {
	ts = ts - ms;
	return *this;
}
PHANSO PHANSO:: operator--(int) {
	PHANSO pst(ts, ms);
	ts = ts - ms;
	return pst;
}
bool operator == (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms == p2.ts * p1.ms) return 1;
	else return 0;
}
bool operator != (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms != p2.ts * p1.ms) return 1;
	else return 0;
}
bool operator < (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms < p2.ts * p1.ms) return 1;
	else return 0;
}
bool operator <= (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms <= p2.ts * p1.ms) return 1;
	else return 0;
}
bool operator > (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms > p2.ts * p1.ms) return 1;
	else return 0;
}
bool operator >= (const PHANSO& p1, const PHANSO& p2) {
	if (p1.ts * p2.ms >= p2.ts * p1.ms) return 1;
	else return 0;
}
PHANSO::operator double()const {
	return (double)ts / ms;
}
PHANSO PHANSO::operator += (const PHANSO& p) {
	this->ts = this->ts * p.ms + this->ms * p.ts;
	this->ms = this->ms * p.ms;
	return *this;
}