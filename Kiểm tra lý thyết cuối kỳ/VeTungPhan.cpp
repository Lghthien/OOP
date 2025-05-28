#include "VeTungPhan.h"
VTP::VTP(string ma, string ten, int nam, int sotro) :VE(ma, ten, nam, sotro) {}
VTP::~VTP() {}
int VTP::getGia() {
	return 70000+(getSoTroChoi()*20000);
}
string VTP::getLoai() {
	return "ve tung phan";
}