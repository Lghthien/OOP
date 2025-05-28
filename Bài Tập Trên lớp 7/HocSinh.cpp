#include"HocSinh.h"
HS::HS(string ten, int ngay, int thang, int nam, string noio, bool gioitinh,string truong, string lop) : DT(ten, ngay, thang, nam, noio, gioitinh), truong(truong), lop(lop) {}
HS::~HS(){}
void HS::Nhap(){
	DT::Nhap();
	cin.ignore();
	cout << "Vui long nhap truong hoc: ";
	getline(cin, truong);
	cout << "Vui luong lop hoc: ";
	getline(cin, lop);
}
void HS::Xuat(){
	cout << "Doi tuong hoc sinh\n";
	DT::Xuat();
	cout << "Truong hoc: ";
	cout << truong;
	cout << "\n";
	cout << "Lop hoc: ";
	cout << lop;
	cout << "\n";
}
string HS::getTruongHS(){
	return truong;
}
void HS::setTruongHS(string truong){
	this->truong = truong;
}
string HS::getLopHS(){
	return lop;
}
void HS::setLopHS(string lop){
	this->lop = lop;
}
string HS::loai(){
	return "hoc sinh";
}
