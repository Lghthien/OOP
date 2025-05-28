#include"DIEM.h"
#define phi 0.0000000001 
DIEM::DIEM() {
	x = 0;
	y = 0;
}
DIEM::DIEM(double x) {
	this->x = x;
	y = 0;
}
DIEM::DIEM(double x, double y) {
	this->x = x;
	this->y = y;
}
DIEM::DIEM(const DIEM& A):x(A.x),y(A.y) {}
DIEM::~DIEM() {
}
void DIEM::setX(double x) {
	this->x = x;
}
void DIEM::setY(double y) {
	this->y = y;
}
void DIEM::setXY(double x, double y) {
	this->x = x;
	this->y = y;
}
double DIEM::getX()const {
	return x;
}
double DIEM::getY()const {
	return y;
}
void DIEM::Nhap(){
	cout << "Vui long nhap hoanh do: ";cin >> x;
	cout << "Vui long nhap tung do: ";cin >> y;
}
void DIEM::Xuat()const {
	cout << "(" << x << "," << y << ")";
}
void DIEM::DiChuyenDiem(double dx, double dy) {
	x += dx;
	y += dy;
}
bool DIEM::KiemTraDiemTrungNhau(const DIEM& a)const {
	return this->x == a.x && this->y == a.y;
}
DIEM DIEM::LayDoiXungQuaGocToaDo()const {
	return DIEM(x == 0 ? 0 : -x, y == 0 ? 0 : -y);
}
double DIEM::TinhKhoangCach2Diem(const DIEM& a) const{
	return sqrt(pow((x - a.x), 2) + pow((y - a.y), 2));
}
istream& operator >> (istream& in, DIEM& t) {
	cout << "Vui long nhap hoanh do: ";in >> t.x;
	cout << "Vui long nhap tung do: ";in >> t.y;
	return in;
}
ostream& operator << (ostream& out, DIEM& t) {
	cout << "(" << t.x << "," << t.y << ")"<<endl;
	return out;
}
bool DIEM::KiemTraTamGiacHopLe(double a, double b, double c) {
  return ((a + c > b) && (a + b > c) && (b + c > a) && (a - b < c) && (b - c < a) && (a - c < b)) ? true : false;
}
bool DIEM::KiemTraTamGiacHopLe(const DIEM& d1, const DIEM& d2)const {
	double a, b, c;
	a = this->TinhKhoangCach2Diem(d1);
	b = this->TinhKhoangCach2Diem(d2);
	c = d1.TinhKhoangCach2Diem(d2);
	return ((a + c > b) && (a + b > c) && (b + c > a) && a > 0 && b > 0 && c > 0) ? true : false;
}
double DIEM::TinhChuViTamGiac(const DIEM& d1, const DIEM& d2) const {
	if (d1.KiemTraTamGiacHopLe(*this, d2)) {
		double a, b, c;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		return a + b + c;
	}
	else return 0;
}
double DIEM::TinhDienTichTamGiac(const DIEM& d1, const DIEM& d2) const {
	if (d1.KiemTraTamGiacHopLe(*this, d2)) {
		double a, b, c, C;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		C = d1.TinhChuViTamGiac(*this, d2)/2;
		return sqrt(C * (C - c) * (C - b) * (C - a));
	}
	else return 0;
}
string DIEM::PhanLoaiTamGiac(const DIEM& d1, const DIEM& d2) const {
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
	else s="Tam giac khong hop le";
	return s;
}
string DIEM::PhanLoaiHinhChuNhat(const DIEM& d1) const {
	string a;
	if (abs(x - d1.x) == abs(y - d1.y)) a = "Hinh vuong";
	else a = "Hinh chu nhat";
	return a;
}
bool DIEM::KiemTraHinhChuNhat(const DIEM&d1)const {
	bool a=KiemTraDiemTrungNhau(d1);
	if (abs(x - d1.x) == 0 || abs(y-d1.y)==0) a = true;
	return a;
}
double DIEM::TinhChuViHinhChuNhat(const DIEM& d1)const {
	return (abs(x - d1.x) + abs(y - d1.y))/2;
}
double DIEM::TinhDienTichHinhChuNhat(const DIEM& d1)const {
	return abs(x - d1.x) * abs(y - d1.y);
}


