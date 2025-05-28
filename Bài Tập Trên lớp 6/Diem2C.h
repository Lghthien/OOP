#pragma once
#ifndef _Diem2C
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cmath>
using namespace std;
class D2C {
protected:
	double x;
	double y;
	static int dem;
public:
	D2C();
	D2C(double);
	D2C(double, double);
	D2C(const D2C&);
	void setX(double);
	void setY(double);
	void setXY(double, double);
	double getX()const;
	double getY()const;
	void Nhap();
	void Xuat()const;
	void DiChuyenDiem(double, double);
	bool KiemTraDiemTrungNhau(const D2C&)const;
	double TinhKhoangCach2Diem(const D2C&)const;
	D2C LayDoiXungQuaGocToaDo()const;
	bool KiemTraTamGiacHopLe(double, double, double);
	bool KiemTraTamGiacHopLe(const D2C&, const D2C&)const;
	double TinhChuViTamGiac(const D2C&, const D2C&)const;
	double TinhDienTichTamGiac(const D2C&, const D2C&)const;
	string PhanLoaiTamGiac(const D2C&, const D2C&) const;
	bool KiemTraHinhChuNhat(const D2C&)const;
	string PhanLoaiHinhChuNhat(const D2C&)const;
	double TinhChuViHinhChuNhat(const D2C&) const;
	double TinhDienTichHinhChuNhat(const D2C&) const;
	friend istream& operator >> (istream&, D2C&);
	friend ostream& operator << (ostream&, D2C&);
	~D2C();
};
#endif // !_Diem2C
