#pragma once
#ifndef _Mang2Chieu
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstdlib>
#include<vector>
using namespace std;
class M2C {
private:
	int sd;
	int sc;
	int** p;
public:
	M2C();
	M2C(int, int);
	M2C(const M2C&);
	~M2C();
	int GetDong();
	int GetCot();
	friend istream& operator >> (istream&, M2C&);
	friend ostream& operator << (ostream&, M2C&);
	void tu_dong_phat_sinh_phan_tu_mang();
	bool Checksonguyento(int);
	void LietKeSoNguyenTo();
	bool Checksochinhphuong(int);
	int DemSoLuongSoChinhPhuong();
	bool CheckSoHoanThien(int);
	long TinhTongSoHoanThienTrenDong();
	bool CheckSoDoiXung(int);
	double TinhTBCongSoDoiXung();
	void XapSepTangDanPhanTuDongK();
};
#endif // !_Mang2Chieu

