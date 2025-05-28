#pragma once
#ifndef _Diem3C
#include"Diem2C.h"
class D3C :public D2C {
protected:
	int z;
	static int dem;
public:
	D3C(double = 0, double = 0, double = 0);
	~D3C();
	double GetCaoDo();
	void SetCaoDo(double);
	bool KiemTraDiemTrungNhau(const D3C&);
	void DiChuyenDiem(double, double, double);
	double TinhKhoangCach2Diem(const D3C&)const;
	D3C LayDoiXungQuaGocToaDo();
	void Nhap();
	void Xuat();
	bool KiemTraTamGiacHopLe(const D3C&,const D3C&)const;
	double TinhChuViTamGiac(const D3C&, const D3C&)const;
	double TinhDienTichTamGiac(const D3C&, const D3C&)const;
	friend istream& operator >> (istream&, D3C&);
	friend ostream& operator << (ostream&, D3C&);
};
#endif // !_Mang3C
