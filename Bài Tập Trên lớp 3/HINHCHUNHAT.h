#pragma once
#ifndef _HINHCHUNHAT
#include"DIEM.h"
class HINHCHUNHAT {
private:
	DIEM A, B;
	static int dem;
public:
	HINHCHUNHAT();
	HINHCHUNHAT(const DIEM&, const DIEM&);
	HINHCHUNHAT(double, double, double, double);
	int Getdem();
	void SetDiemA(const DIEM&);
	void SetDiemB(const DIEM&);
	DIEM GetA() const;
	DIEM GetB() const;
	void Nhap();
	void Xuat();
	bool KiemTra() const;
	string PhanLoai();
	double DienTich()const;
	double ChuVi()const;
	void DiChuyenHinhChuNhat(double, double);
	friend istream& operator >> (istream&, HINHCHUNHAT&);
	friend ostream& operator << (ostream&, HINHCHUNHAT&);
	~HINHCHUNHAT();
};
#endif // !_HINHCHUNHAT