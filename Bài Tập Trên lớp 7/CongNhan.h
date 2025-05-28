#pragma once
#ifndef _NhanVien
#include"DoiTuong.h"
class CN :public DT {
protected:
	string noilamviec;
	int luong ;
public:
	CN(string = "", int = 1, int = 1, int = 1, string = "", bool = 0, string = "", int = 0);
	~CN();
	void Nhap();
	void Xuat();
	string getNoiLamViec();
	void setNoiLamViec(string);
	int getLuong();
	void setLuong(int);
	string loai();
};
#endif 