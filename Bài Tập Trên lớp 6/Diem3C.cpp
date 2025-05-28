#include"Diem3C.h"
int D3C::dem = 0;
D3C::D3C(double x, double y, double z):D2C(x,y),z(z){
	cout << "Da tao 1 diem 3 chieu ==> co " << ++dem << " Diem 3C.";
	cout << endl;
}
D3C::~D3C(){
	cout << "Da huy 1 diem 3 chieu ==> co " << --dem << " Diem 3C.";
	cout << endl;
}
double D3C::GetCaoDo(){
	return z;
}
void D3C::SetCaoDo(double z){
	this->z = z;
}
bool D3C::KiemTraDiemTrungNhau(const D3C&t){
	if (D2C::KiemTraDiemTrungNhau(t)) {
		if (z == t.z) return true;
		else return false;
	}
	else return false;
}
void D3C::DiChuyenDiem(double a, double b, double c){
	D2C::DiChuyenDiem(a, b);
	z += c;
}
double D3C::TinhKhoangCach2Diem(const D3C& t)const{
	return sqrt(pow((x - t.x), 2) + pow((y - t.y), 2) + pow((z - t.z), 2));
}
D3C D3C::LayDoiXungQuaGocToaDo(){
	return D3C(x == 0 ? 0 : -x, y == 0 ? 0 : -y, z == 0 ? 0 : -z);
}
void D3C::Nhap(){
	D2C::Nhap();
	cout << "Vui long nhap cao do: ";cin >> z;
}
void D3C::Xuat(){
	cout << "(" << x << "," << y << "," << z << ")";
}
bool D3C::KiemTraTamGiacHopLe(const D3C& d1, const D3C& d2)const {
	double a, b, c;
	a = this->TinhKhoangCach2Diem(d1);
	b = this->TinhKhoangCach2Diem(d2);
	c = d1.TinhKhoangCach2Diem(d2);
	return ((a + c > b) && (a + b > c) && (b + c > a) && a > 0 && b > 0 && c > 0) ? true : false;
}
double D3C::TinhChuViTamGiac(const D3C& d1, const D3C& d2)const{
	if (!KiemTraTamGiacHopLe(d1, d2)) return 0;
	else {
		double a, b, c;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		return (a + b + c);
	}
}
double D3C::TinhDienTichTamGiac(const D3C& d1, const D3C& d2)const{
	if (!KiemTraTamGiacHopLe(d1, d2)) return 0;
	else {
		double a, b, c,C;
		a = this->TinhKhoangCach2Diem(d1);
		b = this->TinhKhoangCach2Diem(d2);
		c = d1.TinhKhoangCach2Diem(d2);
		C = TinhDienTichTamGiac(d1, d2);
		return sqrt(C * (C - c) * (C - b) * (C - a));
	}
}
istream& operator >> (istream& in, D3C& t){
	t.Nhap();
	return in;
}
ostream& operator << (ostream& out , D3C& t){
	t.Xuat();
	return out;
}