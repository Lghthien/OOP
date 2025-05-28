#include"HINHCHUNHAT.h"
int HINHCHUNHAT::dem = 0;
HINHCHUNHAT::HINHCHUNHAT():A(0,0),B(1,1){
	dem++;
}
HINHCHUNHAT::HINHCHUNHAT(const DIEM&A, const DIEM&B):A(A),B(B){
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
HINHCHUNHAT::HINHCHUNHAT(double xA, double yA, double xB, double yB):A(xA,yA),B(xB,yB){
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
int HINHCHUNHAT::Getdem(){
	return dem;
}
void HINHCHUNHAT::SetDiemA(const DIEM&A){
	this->A = A;
}
void HINHCHUNHAT::SetDiemB(const DIEM&B){
	this->B = B;
}
DIEM HINHCHUNHAT::GetA() const{
	return A;
}
DIEM HINHCHUNHAT::GetB() const{
	return B;
}
void HINHCHUNHAT::Nhap(){
	do {
		A.Nhap();
		B.Nhap();
	} while (!KiemTra());
}
void HINHCHUNHAT::Xuat(){
	cout << "Day la: " << PhanLoai()<<endl;
	cout << "Chu vi: " << ChuVi() << endl;
	cout << "Dien tich: " << DienTich() << endl;
}
bool HINHCHUNHAT::KiemTra() const{
	return A.KiemTraHinhChuNhat(B);
}
string HINHCHUNHAT::PhanLoai(){
	return A.PhanLoaiHinhChuNhat(B);
}
double HINHCHUNHAT::DienTich()const{
	return A.TinhDienTichHinhChuNhat(B);
}
double HINHCHUNHAT::ChuVi()const{
	return A.TinhChuViHinhChuNhat(B);
}
void HINHCHUNHAT::DiChuyenHinhChuNhat(double x, double y) {
	A.DiChuyenDiem(x,y);
	B.DiChuyenDiem(x, y);
}
istream& operator >> (istream& in, HINHCHUNHAT& x) {
	do {
		cout << "Nhap diem thu nhat: \n";
		in>>x.A;
		cout << "Nhap diem thu hai: \n";
		in>>x.B;
	} while (x.KiemTra());
	return in;
}
ostream& operator << (ostream& out, HINHCHUNHAT& x) {
	cout << "Day la: " << x.PhanLoai() << endl;
	cout << "Chu vi: " << x.ChuVi() << endl;
	cout << "Dien tich: " << x.DienTich() << endl;
	cout << "Vi tri hien tai cua hinh chu nhat la: " << endl;
	out << "Diem thu nhat: " << x.A << endl;
	out << "Diem thu hai: " << x.B << endl;
	return out;
}
HINHCHUNHAT::~HINHCHUNHAT(){
	dem--;
}