#pragma once
#ifndef _DoiTuong
#include"NgayThangNam.h"
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
class DT{
protected:
	string ten;
	CDate date;
	string noio;
	bool gioitinh;
public:
	DT(string="",int=1,int=1,int=1, string = "", bool = 0);
	~DT();
	string getTen();
	void setTen(string);
	CDate getNTNsinh();
	void setNTNsinh(int, int, int);
	string getNoiO();
	void setNoiO(string);
	bool getGioiTinh();
	void setGioiTinh(bool);
	virtual void Nhap();
	virtual void Xuat();
	virtual int getNam();
	virtual void setNam(int);
	virtual string getNienKhoa();
	virtual void setNienKhoa(string);
	virtual string getTruongSV();
	virtual void setTruongSV(string);
	virtual string getNganhSV();
	virtual void setNganhSV(string);
	virtual string getTruongHS();
	virtual void setTruongHS(string);
	virtual string getLopHS();
	virtual void setLopHS(string);
	virtual string getNoiLamViec();
	virtual void setNoiLamViec(string);
	virtual int getLuong();
	virtual void setLuong(int);
	virtual string getNgheDanh();
	virtual void setNgheDanh(string);
	virtual string getChuyenMon();
	virtual void setChuyenMon(string);
	virtual string loai() = 0;
};
#endif // !_DoiTuong
