#pragma once
#ifndef _color
#include "Diem3C.h"
class D3CMAU : public D3C {
protected:
	int r, g, b;
	static int dem;
public:
	D3CMAU( double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~D3CMAU();
	int getR();
	int getG();
	int getB();
	void setR(int);
	void setG(int);
	void setB(int);
	void setRGB(int, int, int);
	int getDem();
	bool KiemTraDiemTrungNhau(const D3CMAU&);
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, D3CMAU&);
	friend ostream& operator << (ostream&, D3CMAU&);
};
#endif // !_color
