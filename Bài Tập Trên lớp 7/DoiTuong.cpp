#include"DoiTuong.h"
DT::DT(string ten, int ngay, int thang, int nam, string noio, bool gioitinh):ten(ten),date(ngay,thang,nam),noio(noio),gioitinh(gioitinh){}
DT::~DT(){}
string DT::getTen(){
	return ten;
}
void DT::setTen(string ten){
	this->ten = ten;
}
CDate DT::getNTNsinh(){
	return date;
}
void DT::setNTNsinh(int ngay, int thang, int nam){
	date.setDay(ngay);
	date.setMonth(thang);
	date.setYear(nam);
}
string DT::getNoiO(){
	return noio;
}
void DT::setNoiO(string noio){
	this->noio = noio;
}
bool DT::getGioiTinh(){
	return gioitinh;
}
void DT::setGioiTinh(bool gioitinh){
	this->gioitinh = gioitinh;
}
int DT::getNam(){
	return -1;
}
void DT::setNam(int nam){
	return;
}
string DT::getNienKhoa(){
	return "";
}
void DT::setNienKhoa(string nk){
	return;
}
string DT::getTruongSV(){
	return ""; 
}
void DT::setTruongSV(string truong){
	return;
}
string DT::getNganhSV(){
	return "";
}
void DT::setNganhSV(string nganh){
	return;
}
string DT::getTruongHS(){
	return ""; 
}
void DT::setTruongHS(string truong){
	return;
}
string DT::getLopHS(){
	return ""; 
}
void DT::setLopHS(string lop){ 
	return;
}
string DT::getNoiLamViec(){ 
	return ""; 
}
void DT::setNoiLamViec(string noilamviec){ 
	return;
}
int DT::getLuong(){ 
	return -1;
}
void DT::setLuong(int luong){ 
	return;
}
string DT::getNgheDanh(){ 
	return ""; 
}
void DT::setNgheDanh(string nghedanh){ 
	return;
}
string DT::getChuyenMon(){ 
	return ""; 
}
void DT::setChuyenMon(string chuyenmon){ 
	return;
}
void DT::Nhap(){
	cin.ignore();
	cout << "Vui long nhap ten: ";
	getline(cin, ten);
	cout << "Vui long nhap ngay thang nam sinh:\n";
	cin >> date;
	cin.ignore();
	cout << "Vui long nhap noi o: ";
	getline(cin, noio);
	int x;
	cout << "Vui long chon gioi tinh\n0.Nu\n1.Nam\n";
	cin >> x;
	while (x < 0 || x>1) {
		cout << "Vui long chon lai: ";
		cin >> x;
	}	
	gioitinh = x;
}
void DT::Xuat(){
	cout << "Ho va ten: ";
	cout << ten;
	cout << endl;
	cout << "Ngay thang nam sinh:";
	cout << date;
	cout << endl;
	cout << "Noi o: ";
	cout << noio;
	cout << endl;
	cout << "Gioi tinh: ";
	if (gioitinh) cout << "Nam";
	else cout << "Nu";
	cout << endl;
}