#pragma once
#ifndef _NhanVien
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
class NV {
protected:
	int ma;
	string ten;
	string phong;
public:
	NV(int =0 , string = "", string = "");
	~NV();
	int getMa();
	void setMa(int);
	string getTen();
	void setTen(string);
	string getPhong();
	void setPhong(string);
	virtual void Nhap();
	virtual void Xuat();
	friend istream& operator >> (istream&, NV&);
	friend ostream& operator << (ostream&, NV&);
	virtual double getHeSoLuong();
	virtual void setHeSoLuong(int);
	virtual double getHeSoPhuCap();
	virtual void setHeSoPhuCap(int);
	virtual double getTienCong();
	virtual void setTienCong(int);
	virtual double getSoNgayCong();
	virtual void setSoNgayCong(int);
	virtual double getHeSoVuotGio();
	virtual void setHeSoVuotGio(int);
	virtual int getLuong()=0;
	virtual string getLoai() = 0;
};
#endif // !_NhanVien
