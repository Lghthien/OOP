#pragma once
#ifndef _HocSinh
#include"DoiTuong.h"
class HS :public DT {
protected:
	string truong;
	string lop;
public:
	HS(string = "", int = 1, int = 1, int = 1, string = "", bool = 0, string = "", string = "");
	~HS();
	void Nhap();
	void Xuat();
	string getTruongHS();
	void setTruongHS(string);
	string getLopHS();
	void setLopHS(string);
	string loai();
};
#endif 