#include "VeTronGoi.h"
VTG::VTG(string ma, string ten, int nam, int sotro):VE(ma,ten,nam,sotro){}
VTG::~VTG(){}
int VTG::getGia() {
	return 200000;
}
string VTG::getLoai() {
	return "ve tron goi";
}