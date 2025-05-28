#pragma once
#include"VeTronGoi.h"
#include"VeTungPhan.h"
class DS
{
private:
	VE** p;
	int sl;
public:
	DS();
	~DS();
	int getSoLuong();
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, DS&);
	friend ostream& operator << (ostream&, DS&);
	long long TongTienVe();
	int SoVeTungPhan();
};

