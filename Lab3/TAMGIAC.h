#pragma once
#ifndef _TAMGIAC
#include"DIEM.h"
class TAMGIAC {
private: 
	DIEM A, B, C;
	static int dem;
public:
	TAMGIAC();
	TAMGIAC(const DIEM&,const DIEM&,const DIEM&) ;
	TAMGIAC(double, double, double, double, double, double);
	int Getdem();
	void SetDiemA(const DIEM&) ;
	void SetDiemB(const DIEM&) ;
	void SetDiemC(const DIEM&) ;
	DIEM GetA() const;
	DIEM GetB() const;
	DIEM GetC() const;
	void Nhap();
	void Xuat();
	bool KiemTra() const;
	string PhanLoai();
	double DienTich()const;
	double ChuVi()const;
	friend istream& operator >> (istream&,TAMGIAC&);
	friend ostream& operator << (ostream&, TAMGIAC&);
	~TAMGIAC();
};
#endif // !_TAMGIAC

