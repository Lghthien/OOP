#include"CongNhan.h"
CN::CN(string ten, int ngay, int thang, int nam, string noio, bool gioitinh, string noilamviec, int luong) : DT(ten, ngay, thang, nam, noio, gioitinh), noilamviec(noilamviec), luong(luong) {}
CN::~CN(){}
void CN::Nhap(){
	DT::Nhap();
	cin.ignore();
	cout << "Vui long nhap noi lam viec: ";
	getline(cin, noilamviec);
	cout << "Vui long nhap luong: ";
	cin >> luong;
}
void CN::Xuat(){
	cout << "Doi tuong cong nhan\n";
	DT::Xuat();
	cout << "Noi lam viec: ";
	cout<< noilamviec<<"\n";
	cout << "Luong: ";
	cout << luong<<"\n";
}
string CN::getNoiLamViec(){
	return noilamviec;
}
void CN::setNoiLamViec(string noilamviec){
	this->noilamviec = noilamviec;
}
int CN::getLuong(){
	return luong;
}
void CN::setLuong(int luong){
	this->luong = luong;
}
string CN::loai(){
	return "cong nhan";
}