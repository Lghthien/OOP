#include"MONEY.h"
MONEY::MONEY() :dola(0), cen(0) {}
MONEY::MONEY(int dola) :dola(dola), cen(0) {
	if (this->dola < 0) {
		cout << "Nhap lai dollar:";
		cin >> this->dola;
	}
}
MONEY::MONEY(int dola, int cen) :dola(dola), cen(cen) {
	if (this->dola < 0) {
		cout << "Nhap lai dollar:";
		cin >> this->dola;
	}
	if (this->cen < 0) {
		cout << "Nhap lai cen:";
		cin >> this->cen;
	}
	if (cen > 99) {
		dola += cen / 100;
		cen = cen % 100;
	}
}
MONEY::MONEY(const MONEY& t) {
	this->cen = t.cen;
	this->dola = t.dola;
}
MONEY::~MONEY() {}
int MONEY::getDo() const {
	return dola;
}
int MONEY::getCen() const {
	return cen;
}
void MONEY::setDo(int dola) {
	this->dola = dola;
}
void MONEY::setCen(int cen) {
	this->cen = cen;
}
istream& operator >>(istream& in, MONEY& x) {
	cout << "Nhap so dollar: ";cin >> x.dola;
	while (x.dola < 0) {
		cout << "Vui long nhap lai: ";
		in >> x.dola;
	}
	cout << "Nhap so cen: ";cin >> x.cen;
	while (x.cen < 0) {
		cout << "Vui long nhap lai: ";
		in >> x.cen;
	}
	if (x.cen > 99) {
		x.dola += x.cen / 100;
		x.cen = x.cen % 100;
	}
	return in;
}
ostream& operator << (ostream& out, MONEY& x) {
	out << x.dola << " Dollar " << x.cen << " cents";
	return out;
}
long long MONEY::doitien() {
	cout << "Vui long cho biet ti gia hien tai(VND->do) :";
	int tigia;cin >> tigia;
	long long x;
	x = ((float)cen / 100 + dola) * tigia;
	return x;
}
MONEY MONEY::operator++() {
	cen++;
	if (cen == 100) {
		dola++;
		cen = 0;
	}
	return *this;
}
MONEY MONEY::operator++(int) {
	MONEY t = *this;
	this->cen++;
	if (this->cen == 100) {
		this->dola++;
		this->cen = 0;
	}
	return t;
}