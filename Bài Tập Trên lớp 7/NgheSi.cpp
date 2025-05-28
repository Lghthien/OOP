#include"NgheSi.h"
NS::NS(string ten, int ngay, int thang, int nam, string noio, bool gioitinh, string nghedanh, string chuyenmon) : DT(ten, ngay, thang, nam, noio, gioitinh), nghedanh(nghedanh), chuyenmon(chuyenmon) {}
NS::~NS(){}
void NS::Nhap(){
	DT::Nhap();
	cin.ignore();
	cout << "Vui long nhap nghe danh: ";
	getline(cin, nghedanh);
	cout << "Vui long nhap chuyen mon: ";
	getline(cin, chuyenmon);
}
void NS::Xuat(){
	cout << "Doi tuong nghe si, ca si\n";
	DT::Xuat();
	cout << "Nghe danh: ";
	cout << nghedanh<<"\n";
	cout << "Chuyen mon: ";
	cout << chuyenmon<<"\n";
}
string NS::getNgheDanh(){
	return nghedanh;
}
void NS::setNgheDanh(string nghedanh){
	this->nghedanh = nghedanh;
}
string NS::getChuyenMon(){
	return chuyenmon;
}
void NS::setChuyenMon(string chuyenmon){
	this->chuyenmon = chuyenmon;
}
string NS::loai() {
	return "nghe si, ca si";
}