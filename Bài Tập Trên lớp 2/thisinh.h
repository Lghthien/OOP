#pragma once
#ifndef _thisinh
#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;
class Candidate {
private:
	string code, name;
	double core_math, core_literature, core_english;
	int day, month, year;
public:
	double core_sum;
	void NhapNgayThangNam();
	void XuatNgayThangNam();
	void TinhDiemTong();
	void Nhap();
	void Xuat();
};
class TestCandidate {
private:
	Candidate a[100];
public:
	void Nhap(int&);
	void Inthongtin(int&);
};
#endif // !_thisinh
