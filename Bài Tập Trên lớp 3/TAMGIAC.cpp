#include"TAMGIAC.h"
int TAMGIAC::dem = 0;
TAMGIAC::TAMGIAC() :A(0, 0), B(1, 0), C(0, 1) {
	dem++;
}
TAMGIAC::TAMGIAC(const DIEM& A,const DIEM& B,const DIEM& C) :A(A), B(B), C(C) {
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
TAMGIAC::TAMGIAC(double xA, double yA, double xB, double yB, double xC, double yC) :A(xA, yA), B(xB, yB), C(xC, yC) {
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
int TAMGIAC::Getdem() {
	return dem;
}
void TAMGIAC::SetDiemA(const DIEM&A) {
	this->A = A;
}
void TAMGIAC::SetDiemB(const DIEM&B) {
	this->B = B;
}
void TAMGIAC::SetDiemC(const DIEM&C) {
	this->C = C;
}
DIEM TAMGIAC::GetA() const {
	return A;
}
DIEM TAMGIAC::GetB() const {
	return B;
}
DIEM TAMGIAC::GetC() const {
	return C;
}
void TAMGIAC::Nhap() {
	do {
		A.Nhap();
		B.Nhap();
		C.Nhap();
	} while (!KiemTra());
}
void TAMGIAC::Xuat() {
	cout << "Day la " << PhanLoai()<<endl;
	cout << "Dien tich tam giac: " << DienTich() << endl;
	cout << "Chu vi tam giac: " << ChuVi() << endl;
}
bool TAMGIAC::KiemTra() const {
	return A.KiemTraTamGiacHopLe(B, C);
}
string TAMGIAC::PhanLoai() {
	return A.PhanLoaiTamGiac(B, C);
}
double TAMGIAC::DienTich()const {
	return A.TinhDienTichTamGiac(B, C);
}
double TAMGIAC::ChuVi()const {
	return A.TinhChuViTamGiac(B, C);
}
TAMGIAC::~TAMGIAC() {
	dem--;
}
void TAMGIAC::DiChuyenTamGiac(double x, double y) {
	A.DiChuyenDiem(x, y);
	B.DiChuyenDiem(x, y);
	C.DiChuyenDiem(x, y);
}
istream& operator >> (istream& in, TAMGIAC& x) {
	do {
		cout << "Nhap gia tri A\n";
		in>>x.A;
		cout << "Nhap gia tri B\n";
		in>>x.B;
		cout << "Nhap gia tri B\n";
		in>>x.C;
	} while (!x.KiemTra());
	return in;
}
ostream& operator << (ostream& out, TAMGIAC& x) {
	cout << "Day la " << x.PhanLoai() << endl;
	cout << "Dien tich tam giac: " << x.DienTich() << endl;
	cout << "Chu vi tam giac: " << x.ChuVi() << endl;
	cout << "Vi tri hien tai cua tam giac la: "<<endl;
	out << "Diem A: " << x.A<<endl;
	out << "Diem B: " << x.B<<endl;
	out << "Diem C: " << x.C << endl;
	return out;
}