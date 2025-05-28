#include"SinhVien.h"
SV::SV(string ten, int ngay, int thang, int nam, string noio, bool gioitinh, int n , string nk, string truong, string nganh):DT(ten,ngay,thang,nam,noio,gioitinh),n(n),nk(nk),truong(truong),nganh(nganh){}
SV::~SV(){}
void SV::Nhap(){
	DT::Nhap();
	cout << "Vui luong nhap nam vao truong: ";
	cin >> n;
	cin.ignore(); 
	cout << "Vui long nhap nien khoa: ";
	getline(cin, nk);
	cout << "Vui long nhap truong hoc: ";
	getline(cin, truong);
	cout << "Vui long nhap nganh hoc: ";
	getline(cin, nganh);
}
void SV::Xuat(){
	cout << "Doi tuong sinh vien\n";
	DT::Xuat();
	cout << "Nam vao truong: ";
	cout << n;
	cout << endl;
	cout << "Nien khoa: ";
	cout << nk;
	cout << endl;
	cout << "Truong hoc: ";
	cout << truong;
	cout << endl;
	cout << "Nganh hoc: ";
	cout << nganh;
	cout << endl;
}
int SV::getNam(){
	return n;
}
void SV::setNam(int n){
	this->n = n;
}
string SV::getNienKhoa(){
	return nk;
}
void SV::setNienKhoa(string nk){
	this->nk = nk;
}
string SV::getTruongSV(){
	return truong;
}
void SV::setTruongSV(string truong){
	this->truong = truong;
}
string SV::getNganhSV(){
	return nganh;
}
void SV::setNganhSV(string nganh){
	this->nganh = nganh;
}
string SV::loai(){
	return "sinh vien";
}