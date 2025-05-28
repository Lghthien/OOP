#pragma once
#include"veDS.h"
class VTP:public VE
{
public:
	VTP(string = "", string = "", int = 1900, int = 0);
	~VTP();
	void Nhap();
	void Xuat();
	int getGia();
	string getLoai();
};

