#pragma once
#ifndef _ThuVien
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class PHANSO {
private:
	int ts, ms;
public:
	PHANSO();
	PHANSO(int);
	PHANSO(int, int);
	double QuiDoisoThuc();
	void Nhap();
	int TimUCLN();
	void Xuly();
	void Xuat();
	PHANSO operator + (PHANSO&);
	PHANSO operator - (PHANSO&);
	PHANSO operator * (PHANSO&);
	PHANSO operator / (PHANSO&);
	void SetTsMs(int, int);
	int GetTs();
	int GetMs();
	~PHANSO();
};
#endif // !

