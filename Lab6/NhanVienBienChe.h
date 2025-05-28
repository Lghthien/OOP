#pragma once
#ifndef _NVBC
#include"NhanVien.h"
class NVBC : public NV {
protected:
	double hsl;
	double hspc;
public:
	NVBC(int=0, string = "", string = "", double = 0, double = 0);
	~NVBC();
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, NVBC&);
	friend ostream& operator << (ostream&, NVBC&);
	double getHeSoLuong();
	void setHeSoLuong(int);
	double getHeSoPhuCap();
	void setHeSoPhuCap(int);
	int getLuong() ;
	string getLoai() ;
};
#endif // !_NVBC

