#include"CDate.h"
CDate::CDate() :d(12),m(5),y(2023) {
}
CDate::CDate(int d):m(5),y(2023){
	this->d = d;
	if (KiemTra()) this->d = d;
	else {
		do {
			cout << "Vui long nhap lai ngay: ";
			cin >> this->d;
		} while (!KiemTra());
	}
}
CDate::CDate(int d, int m):y(2023){
	this->d = d;
	this->m = m;
	if (KiemTra()) {
		this->d = d;
		this->m = m;
	}
	else {
		do {
			cout << "Vui long nhap lai ngay: ";
			cin >> this->d;
			cout << "Vui long nhap lai thang: ";
			cin >> this->m;
		} while (!KiemTra());
	}
}
CDate::CDate(int d, int m, int y){
	this->d = d;
	this->m = m;
	this->y = y;
	if (KiemTra()) {
		this->d = d;
		this->m = m;
		this->y = y;
	}
	else {
		do {
			cout << "Vui long nhap lai ngay: ";
			cin >> this->d;
			cout << "Vui long nhap lai thang: ";
			cin >> this->m;
			cout << "Vui long nhap lai nam: ";
			cin >> this->y;
		} while (!KiemTra());
	}
}
void CDate::setDay(int d){
	if (KiemTra()) this->d = d;
}
void CDate::setMonth(int m){
	if (KiemTra()) this->m = m;
}
void CDate::setYear(int m){
	if (KiemTra()) this->y = y;
}
int CDate::getDay() const{
	return d;
}
int CDate::getMonth() const{
	return m;
}
int CDate::getYear() const{
	return y;
}
bool CDate::KiemTra() {
	bool a = true;

	if (y < 0) a = false;

	if (m <= 0 || m > 12) a = false;

	switch (m) {
	case 2:
	{  
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		  if (d <= 0 || d >= 30) a = false;
	    }
	else {
		if (d <= 0 || d >= 29) a = false;
		}
	}break;
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (d <= 0 || d >= 31) a = false;
	}break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		if (d <= 0 || d > 31) a = false;
	}break;
  }
	return a;
}
istream& operator >> (istream& in, CDate& x){
	cout << "Vui long nhap ngay: ";
	cin >> x.d;
	cout << "Vui long nhap thang: ";
	cin >> x.m;
	cout << "Vui long nhap nam: ";
	cin >> x.y;
	while (!x.KiemTra()) {
		cout << "\n\n";
		cout << "Du lieu ban nhap khong hop le vui long nhap lai: \n";
		cout << "Vui long nhap ngay: ";
		cin >> x.d;
		cout << "Vui long nhap thang: ";
		cin >> x.m;
		cout << "Vui long nhap nam: ";
		cin >> x.y;
	}
	return in;
}
ostream& operator << (ostream& out, CDate& x){
	cout << x.d << "/" << x.m << "/" << x.y;
	return out;
}
CDate CDate::operator ++ (){
	d += 1;
	if (!KiemTra()) {
		if (m != 12) {
			d = 1;
			m = m + 1;
		}
		else {
			d = 1;
			m = 1;
			y = y + 1;
		}
	}
	return *this;
}
CDate CDate::operator ++ (int x){
	CDate a = *this;
	d += 1;
	if (!KiemTra()) {
		if (m != 12) {
			d = 1;
			m = m + 1;
		}
		else {
			d = 1;
			m = 1;
			y = y + 1;
		}
	}
	return a;
}
CDate CDate::operator -- (){
	d -= 1;
	if (!KiemTra()) {
		if (m != 1) {
			if (m == 3) {
				d = 29;
				m = m - 1;
				if (!KiemTra()) {
					d--;
				}
			}
			else {
				d = 31;
				m = m - 1;
				if (!KiemTra()) {
					d--;
				}
			}
		}
		else {
			d = 31;
			m = 12;
			y = y -1;
		}
	}
	return *this;
}
CDate CDate::operator -- (int x){
	CDate a = *this;
	d -= 1;
	if (!KiemTra()) {
		if (m != 1) {
			if (m == 3) {
				d = 29;
				m = m - 1;
				if (!KiemTra()) {
					d--;
				}
			}
			else {
				d = 31;
				m = m - 1;
				if (!KiemTra()) {
					d--;
				}
			}
		}
		else {
			d = 31;
			m = 12;
			y = y - 1;
		}
	}
	return a;
}
CDate::~CDate(){}
CDate operator + (CDate x, int n){
	for (int i = 0;i < n;i++) {
		x++;
	}
	return x;
}
CDate operator - (CDate x, int n){
	for (int i = 0;i < n;i++) {
		x--;
	}
	return x;
}