#pragma once
#ifndef _diem2Cmau
#include"Diem2C.h"
#include"Mau.h"
class D2CMAU : public D2C, MAU {
private:
	static int dem;
public:
	~D2CMAU();
	D2CMAU(double = 0, double = 0, int = 0, int = 0, int = 0);
	bool KiemTraDiemTrungNhau(const D2CMAU&);
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, D2CMAU&);
	friend ostream& operator << (ostream&, D2CMAU&);
	int getDem();
};
#endif // !_diem2Cmau
