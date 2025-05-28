#pragma once
#ifndef _NhanVien
#include"DoiTuong.h"
class NS :public DT {
protected:
	string nghedanh;
	string chuyenmon;
public:
	NS(string = "", int = 1, int = 1, int = 1, string = "", bool = 0, string = "", string = "");
	~NS();
	void Nhap();
	void Xuat();
	string getNgheDanh();
	void setNgheDanh(string);
	string getChuyenMon();
	void setChuyenMon(string);
	string loai();
};
#endif 