#pragma once
#ifndef _Diem3chieumaubai4
#include"Diem3C.h"
#include"Mau.h"
class D3CMAU4:public D3C,MAU {
protected:
	static int dem;
public:
	D3CMAU4(double = 0, double = 0, double = 0, int = 0, int = 0, int = 0);
	~D3CMAU4();
	int getDem();
	bool KiemTraDiemTrungNhau(const D3CMAU4&);
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, D3CMAU4&);
	friend ostream& operator << (ostream&, D3CMAU4&);
};
#endif // !_Diem3chieumaubai4

