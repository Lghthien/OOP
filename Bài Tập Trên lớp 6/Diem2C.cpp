#include"Diem2C.h"
#define phi 0.0000000001 
int D2C::dem = 0;
D2C::D2C() {
	x = 0;
	y = 0;
	cout << "Da tao 1 diem 2 chieu ==> co "<<++dem<<" Diem 2C.";
	cout << endl;
}
D2C::D2C(double x) {
	this->x = x;
	y = 0;
	cout << "Da tao 1 diem 2 chieu ==> co " << ++dem << " Diem 2C.";
	cout << endl;
}
D2C::D2C(double x, double y) {
	this->x = x;
	this->y = y;
	cout << "Da tao 1 diem 2 chieu ==> co " << ++dem << " Diem 2C.";
	cout << endl;
}
D2C::D2C(const D2C& A) :x(A.x), y(A.y) {
	cout << "Da tao 1 diem 2 chieu ==> co " << ++dem << " Diem 2C.";
	cout << endl;
}
D2C::~D2C() {
	cout << "Da huy 1 diem 2 chieu ==> co "<<--dem<<" Diem 2C.";
	cout << endl;
}
void D2C::setX(double x) {
	this->x = x;
}
void D2C::setY(double y) {
	this->y = y;
}
void D2C::setXY(double x, double y) {
	this->x = x;
	this->y = y;
}
double D2C::getX()const {
	return x;
}
double D2C::getY()const {
	return y;
}
void D2C::Nhap() {
	cout << "Vui long nhap hoanh do: ";cin >> x;
	cout << "Vui long nhap tung do: ";cin >> y;
}
void D2C::Xuat()const {
	cout << "(" << x << "," << y << ")";
}
void D2C::DiChuyenDiem(double dx, double dy) {
	x += dx;
	y += dy;
}
bool D2C::KiemTraDiemTrungNhau(const D2C& a)const {
	return this->x == a.x && this->y == a.y;
}
D2C D2C::LayDoiXungQuaGocToaDo()const {
	return D2C(x == 0 ? 0 : -x, y == 0 ? 0 : -y);
}
double D2C::TinhKhoangCach2Diem(const D2C& a) const {
	return sqrt(pow((x - a.x), 2) + pow((y - a.y), 2));
}
istream& operator >> (istream& in, D2C& t) {
	cout << "Vui long nhap hoanh do: ";in >> t.x;
	cout << "Vui long nhap tung do: ";in >> t.y;
	return in;
}
ostream& operator << (ostream& out, D2C& t) {
	cout << "(" << t.x << "," << t.y << ")" << endl;
	return out;
}
bool D2C::KiemTraTamGiacHopLe(double a, double b, double c) {
	return ((a + c > b) && (a + b > c) && (b + c > a) && (a - b < c) && (b - c < a) && (a - c < b)) ? true : false;
}
bool D2C::KiemTraTamGiacHopLe(const D2C& d1, const D2C& d2)const {
	double a, b, c;
	a = this->TinhKhoangCach2Diem(d1);
	b = this->TinhKhoangCach2Diem(d2);
	c = d1.TinhKhoangCach2Diem(d2);
	return ((a + c > b) && (a + b > c) && (b + c > a) && a > 0 && b > 0 && c > 0) ? true : false;
}
double D2C::TinhChuViTamGiac(const D2C& d1, const D2C& d2) const {
	if (d1.KiemTraTamGiacHopLe(*this, d2)) {
		double a, b, c;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		return a + b + c;
	}
	else return 0;
}
double D2C::TinhDienTichTamGiac(const D2C& d1, const D2C& d2) const {
	if (d1.KiemTraTamGiacHopLe(*this, d2)) {
		double a, b, c, C;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		C = d1.TinhChuViTamGiac(*this, d2) / 2;
		return sqrt(C * (C - c) * (C - b) * (C - a));
	}
	else return 0;
}
string D2C::PhanLoaiTamGiac(const D2C& d1, const D2C& d2) const {
	string s;
	double a, b, c;
	a = this->TinhKhoangCach2Diem(d1);
	b = this->TinhKhoangCach2Diem(d2);
	c = d1.TinhKhoangCach2Diem(d2);
	if (KiemTraTamGiacHopLe(d1, d2)) {
		if (a == b && b == c) s = "Tam giac deu";
		else if (a == b || b == c || a == c) {
			if ((abs(a * a + b * b - c * c) < phi) || (abs(a * a - b * b + c * c) < phi) || (abs(-a * a + b * b + c * c) < phi)) {
				s = "Tam giac vuong can";
			}
			else s = "Tam giac can";
		}
		else if ((abs(a * a + b * b - c * c) < phi) || (abs(a * a - b * b + c * c) < phi) || (abs(-a * a + b * b + c * c) < phi)) {
			s = "Tam giac vuong";
		}
		else s = "Tam giac thuong";
	}
	else s = "Tam giac khong hop le";
	return s;
}
string D2C::PhanLoaiHinhChuNhat(const D2C& d1) const {
	string a;
	if (abs(x - d1.x) == abs(y - d1.y)) a = "Hinh vuong";
	else a = "Hinh chu nhat";
	return a;
}
bool D2C::KiemTraHinhChuNhat(const D2C& d1)const {
	bool a = KiemTraDiemTrungNhau(d1);
	if (abs(x - d1.x) == 0 || abs(y - d1.y) == 0) a = true;
	return a;
}
double D2C::TinhChuViHinhChuNhat(const D2C& d1)const {
	return (abs(x - d1.x) + abs(y - d1.y)) / 2;
}
double D2C::TinhDienTichHinhChuNhat(const D2C& d1)const {
	return abs(x - d1.x) * abs(y - d1.y);
}

