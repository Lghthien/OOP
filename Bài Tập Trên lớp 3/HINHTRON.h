#pragma once
#ifndef _HINHTRON
#include"DIEM.h"
class HINHTRON {
private:
	DIEM O;
	double R;
	static int dem;
public:
	HINHTRON();
	HINHTRON(const DIEM&, double);
	HINHTRON(double, double, double);
	int Getdem();
	void SetDiemO(const DIEM&);
	void SetBanKinh(const double&);
	DIEM GetO() const;
	double GetBanKinh() const;
	void Nhap();
	void Xuat();
	void DiChuyenDuongTron(double, double);
	bool KiemTra() const;
	double DienTich()const;
	double ChuVi()const;
	friend istream& operator >> (istream&, HINHTRON&);
	friend ostream& operator << (ostream&, HINHTRON&);
	~HINHTRON();
};
#endif // !HINHTRON


