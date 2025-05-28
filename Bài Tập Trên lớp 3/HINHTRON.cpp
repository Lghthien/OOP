#include"HINHTRON.h"
int HINHTRON::dem = 0;
HINHTRON::HINHTRON():O(0,0),R(1) {
	dem++;
}
HINHTRON::HINHTRON(const DIEM& O, double R):O(O),R(R) {
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
HINHTRON::HINHTRON(double xO, double yO, double R):O(xO,yO),R(R) {
	if (!KiemTra()) {
		Nhap();
	}
	dem++;
}
int HINHTRON::Getdem() {
	return dem;
}
void HINHTRON::SetDiemO(const DIEM&O) {
	this->O = O;
}
void HINHTRON::SetBanKinh(const double&R) {
	this->R = R;
}
DIEM HINHTRON::GetO() const {
	return O;
}
double HINHTRON::GetBanKinh() const {
	return R;
}
void HINHTRON::Nhap() {
	do {
		O.Nhap();
		cin >> R;
	} while (!KiemTra());
}
void HINHTRON::Xuat() {
	cout << "Chu vi: " << ChuVi();
	cout << "Dien tich" << DienTich();
}
void HINHTRON::DiChuyenDuongTron(double x,double y) {
	O.DiChuyenDiem(x, y);
}
bool HINHTRON::KiemTra() const {
	return (R <= 0) ? 0 : 1;
}
double HINHTRON::DienTich()const {
	return R * R * 3.14;
}
double HINHTRON::ChuVi()const {
	return 2 * R * 3.14;
}
istream& operator >> (istream& in, HINHTRON& x){
	do {
		cout << "Nhap tam I:"<<endl;
		in>>x.O;
		cout << "Nhap ban kinh duong tron: ";
		in >> x.R;
	} while (!x.KiemTra());
	return in;
}
ostream& operator << (ostream& out, HINHTRON& x){
	cout << "Chu vi: " << x.ChuVi()<<endl;
	cout << "Dien tich: " << x.DienTich()<<endl;
	cout << "Vi tri hien tai cua duong tron la: ";
	out <<"Tam I: " << x.O<<endl;
	return out;
}
HINHTRON::~HINHTRON() {
	dem--;
}