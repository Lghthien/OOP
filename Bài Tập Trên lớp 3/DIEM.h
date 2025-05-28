#pragma once
#ifndef _DIEM
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cmath>
using namespace std;
class DIEM {
private:
	double x;
	double y;
public:
	DIEM();
	DIEM(double);
	DIEM(double, double);
	DIEM(const DIEM&);
	void setX(double);
	void setY(double);
	void setXY(double, double);
	double getX()const;
	double getY()const;
	void Nhap();
	void Xuat()const;
	void DiChuyenDiem(double, double);
	bool KiemTraDiemTrungNhau(const DIEM&)const;
	double TinhKhoangCach2Diem(const DIEM&)const;
	DIEM LayDoiXungQuaGocToaDo()const;
	bool KiemTraTamGiacHopLe(double, double, double);
	bool KiemTraTamGiacHopLe(const DIEM&,const DIEM&)const;
	double TinhChuViTamGiac(const DIEM&, const DIEM&)const;
	double TinhDienTichTamGiac(const DIEM&, const DIEM&)const;
	string PhanLoaiTamGiac(const DIEM&, const DIEM&) const;
	bool KiemTraHinhChuNhat(const DIEM&)const;
	string PhanLoaiHinhChuNhat(const DIEM&)const;
	double TinhChuViHinhChuNhat(const DIEM&) const;
	double TinhDienTichHinhChuNhat(const DIEM&) const;
	friend istream& operator >> (istream&, DIEM&);
	friend ostream& operator << (ostream&, DIEM&);
	~DIEM();
};
#endif // !_DIEM

