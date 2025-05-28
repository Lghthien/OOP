#include"NhanVien.h"
NV::NV(int ma, string ten, string phong):ma(ma),ten(ten),phong(phong){}
NV::~NV(){}
void NV::Nhap() {
	cout << "Vui long nhap ma: ";
	cin >> ma;
	cout << "Vui long nhap ho va ten: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Vui long nhap phong ban: ";
	getline(cin, phong);
}
void NV::Xuat(){
	cout << "Ma: ";
	cout << ma <<endl;
	cout << "Ho va ten: ";
	cout << ten<<endl;
	cout << "Phong ban: ";
	cout << phong <<endl;
}
istream& operator >> (istream& in, NV& d){
	d.Nhap();
	return in;
}
ostream& operator << (ostream& out, NV& d){
	d.Xuat();
	return out;
}
int NV::getMa(){
	return ma;
}
void NV::setMa(int ma){
	this->ma = ma;
}
string NV::getTen(){
	return ten;
}
void NV::setTen(string ten){
	this->ten = ten;
}
string NV::getPhong(){
	return phong;
}
void NV::setPhong(string phong){
	this->phong = phong;
}
double NV::getHeSoLuong(){
	return -1;
}
void NV::setHeSoLuong(int hsl){
	return;
}
double NV::getHeSoPhuCap(){
	return -1;
}
void NV::setHeSoPhuCap(int hspc){
	return ;
}
double NV::getTienCong(){
	return -1;
}
void NV::setTienCong(int tc){
	return;
}
double NV::getSoNgayCong(){
	return -1;
}
void NV::setSoNgayCong(int snc){
	return;
}
double NV::getHeSoVuotGio(){
	return -1;
}
void NV::setHeSoVuotGio(int hsvg){
	return;
}