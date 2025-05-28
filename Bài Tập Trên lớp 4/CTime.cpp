#include"CTime.h"
CTime::CTime():s(0), m(0), h(0) {
}
CTime::CTime(int s):s(s),m(0),h(0){
	if (!CheckTime()) {
		cout << "Vui long nhap lai giay: ";
		cin >> s;
	}
}
CTime::CTime(int s, int m):s(s),m(m),h(0){
	if (!CheckTime()) {
		cout << "Vui long nhap lai giay: ";
		cin >> s;
		cout << "Vui long nhap lai phut: ";
		cin >> m;
	}
}
CTime::CTime(int s, int m, int h):s(s), m(m), h(h) {
	if (!CheckTime()) {
		cout << "Vui long nhap lai giay: ";
		cin >> s;
		cout << "Vui long nhap lai phut: ";
		cin >> m;
		cout << "Vui long nhap lai gio: ";
		cin >> h;
	}
}
void CTime::SetHour(int h){
	if (h < 0) return;
	this->h = h;
}
void CTime::SetMinute(int m){
	if (m < 0 || m>59) return;
	this->m = m;
}
void CTime::SetSecond(int s){
	if (m < 0 || m>59) return;
	this->s = s;
}
int CTime::GetHour()const{
	return h;
}
int CTime::GetMinute()const{
	return m;
}
int CTime::GetSecond()const{
	return s;
}
istream& operator >> (istream& in, CTime& x){
	cout << "Vui long nhap gio: ";cin >> x.h;	
	cout << "Vui long nhap phut: ";cin >> x.m;
	cout << "Vui long nhap giay: ";cin >> x.s;
	cout << "\n";
	while (!x.CheckTime()) {
		cout << "\n";
		cout << "Du lieu cua ban khong hop le vui long nhap lai\n";
		cout << "Vui long nhap gio: ";cin >> x.h;
		cout << "Vui long nhap phut: ";cin >> x.m;
		cout << "Vui long nhap giay: ";cin >> x.s;
	}
	return in;
}
ostream& operator << (ostream& out, CTime& x){
	cout << x.h << "h:" << x.m << "m:" << x.s<<"s\n";
	return out;
}
CTime operator + (CTime& x, int n){
	if (n >= 3600) {
		x.h = x.h + (n / 3600);
		n = n % 3600;
	}
	if (n >= 60) {
		x.m = x.m + (n / 60);
		n = n % 60;
	}
	x.s = x.s + n ;
	if (x.s>=60) {
		x.s = x.s % 60;
		x.m += 1;
	}
	if (x.m >= 60) {
		x.m = x.m % 60;
		x.h += 1;
	}
	return x;
}
CTime operator - (CTime& x, int n) {
	if (n >= 3600) {
		x.h = x.h - (n / 3600);
		n = n % 3600;
		if (!x.CheckTime()) {
			x.h = 0;
			x.m = 0;
			x.s = 0;
			return x;
		}
	}
	if (n >= 60) {
		x.m = x.m - (n / 60);
		n = n % 60;
		if (!x.CheckTime()) {
			x.h = 0;
			x.m = 0;
			x.s = 0;
			return x;
		}
	}
	x.s = x.s - n;
	if (x.s < 0) {
		x.s = x.s + 60;
		x.m -= 1;
	}
	if (x.m < 0) {
		x.m = x.m + 60;
		x.h -= 1;
		if (!x.CheckTime()) {
			x.h = 0;
			x.m = 0;
			x.s = 0;
			return x;
		}
	}
	return x;
}
CTime CTime::operator -- (){
	s = s - 1;
	if (s < 0) {
		s = s + 60;
		m -= 1;
	}
	if (m < 0) {
		m = m + 60;
		h -= 1;
		if (!CheckTime()) {
			h = 0;
			m = 0;
			s = 0;
		}
	}
	return *this;
}
CTime CTime::operator ++(){
	s = s + 1;
	if (s >= 60) {
		s = s % 60;
		m += 1;
	}
	if (m >= 60) {
		m = m % 60;
		h += 1;
	}
	return *this;
}
bool CTime::CheckTime() {
	bool a = true;
	if (s < 0 || m < 0 || h < 0 || s > 59 || m > 59  ) {
		a = false;
	}
	return a;
}
CTime CTime::operator -- (int a){
	CTime p = *this;
	s = s - 1;
	if (s < 0) {
		s = s + 60;
		m -= 1;
	}
	if (m < 0) {
		m = m + 60;
		h -= 1;
		if (!CheckTime()) {
			h = 0;
			m = 0;
			s = 0;
		}
	}
	return p;
}
CTime CTime::operator ++(int a){
	CTime p = *this;
	s = s + 1;
	if (s >= 60) {
		s = s % 60;
		m += 1;
	}
	if (m >= 60) {
		m = m % 60;
		h += 1;
	}
	return p;
}
CTime::~CTime() {}