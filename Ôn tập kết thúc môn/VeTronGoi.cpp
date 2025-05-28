#include "VeTronGoi.h"
VTG::VTG(string ma, string ten, int nam, int sotro):VE(ma,ten,nam,sotro){}
VTG::~VTG(){}
void VTG::Nhap() {
	VE::Nhap();
}
void VTG::Xuat() {
	cout << "Loai: " << getLoai() << endl;
	VE::Xuat();
	cout << "Gia :" << getGia() <<" dong" << "\n\n";
}
int VTG::getGia() {
	return 200000;
}
string VTG::getLoai() {
	return "ve tron goi";
}