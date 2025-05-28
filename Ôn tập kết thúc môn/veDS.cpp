#include "veDS.h"
VE::VE(string ma, string ten, int nam, int sotro):ma(ma),ten(ten),nam(nam),sotro(sotro){
	while (this->nam < 1900) {
		cout << "Vui long nhap lai nam sinh (nam>=1900): ";
		cin >> this->nam;
	}
	while (this->sotro < 0 || this->sotro > 30) {
		cout << "Vui long nhap lai so tro (0<=so tro <= 30): ";
		cin >> this->sotro;
	}
}
VE::~VE(){}
void VE::Nhap(){
	cin.ignore();
	cout << "Vui long nhap ma ve: ";
	getline(cin, ma);
	cout << "Vui long nhap ho va ten nguoi mua ve: ";
	getline(cin, ten);
	cout << "Vui long nhap nam sinh nguoi do: ";
	cin >> nam;
	while (nam < 1900) {
		cout << "Vui long nhap lai nam sinh (nam>=1900): ";
		cin >> nam;
	}
	cout << "Vui long nhap so tro choi nguoi do tham du: ";
	cin >> sotro;
	while (sotro < 0 || sotro > 30) {
		cout << "Vui long nhap lai so tro (0<=so tro <= 30): ";
		cin >> sotro;
	}
}
void VE::Xuat(){
	cout << "Ma ve: ";
	cout << ma << endl;
	cout << "Ho va ten nguoi mua ve: ";
	cout << ten << endl;
	cout << "Nam sinh nguoi do: ";
	cout << nam << endl;
	cout << "So tro choi nguoi do tham du: ";
	cout << sotro << endl;
}
string VE::getMa(){
	return ma;
}
void VE::setMa(string ma){
	this->ma = ma;
}
string VE::getTen(){
	return ten;
}
void VE::setTen(string ten){
	this->ten = ten;
}
int VE::getNam(){
	return nam;
}
void VE::setNam(int nam){
	this->nam = nam;
}
int VE::getSoTroChoi(){
	return sotro;
}
void VE::setSoTroChoi(int sotro){
	this->sotro = sotro;
}