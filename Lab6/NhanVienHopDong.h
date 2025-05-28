#pragma once
#ifndef _NVHD
#include"NhanVien.h"
class NVHD :public NV {
protected:
	double tc;
	double snc;
	double hsvg;
public:
	NVHD(int=0, string = "", string = "", double = 0, double = 0, double =0);
	~NVHD();
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, NVHD&);
	friend ostream& operator << (ostream&, NVHD&);
	double getTienCong();
	void setTienCong(int);
	double getSoNgayCong();
	void setSoNgayCong(int);
	double getHeSoVuotGio();
	void setHeSoVuotGio(int);
	int getLuong();
	string getLoai();
};
#endif // !_NVHD

