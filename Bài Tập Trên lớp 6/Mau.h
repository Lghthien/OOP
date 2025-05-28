#pragma once
#ifndef _Mau
#include<iostream>
#include<math.h>
using namespace std;
class MAU {
protected:
	int r, g, b;
    static int dem;
public:
	~MAU();
	MAU(int = 0, int = 0, int = 0);
	int getR();
	int getG();
	int getB();
	void setR(int);
	void setG(int);
	void setB(int);
	void setRGB(int, int, int);
	int getDem();
	bool KiemTraDiemTrungNhau(const MAU&);
	void Nhap();
	void Xuat();
	friend istream& operator >> (istream&, MAU&);
	friend ostream& operator << (ostream&, MAU&);
};
#endif // !_Mau

