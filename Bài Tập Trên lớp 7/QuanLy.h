#pragma once
#ifndef _QuanLy
#include"DoiTuong.h"
#include"CongNhan.h"
#include"HocSinh.h"
#include"NgheSi.h"
#include"SinhVien.h"
class QL {
protected:
	DT** p;
	int sl;
public:
	QL();
	~QL();
	int getSoLuong();
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, QL&);
	friend ostream& operator << (ostream&, QL&);
};
#endif // !_QuanLy
