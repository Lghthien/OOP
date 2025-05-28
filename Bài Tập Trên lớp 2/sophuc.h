#pragma once
#ifndef _sophuc
#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class SOPHUC {
private:
	double a, b;
public:
	void Nhap();
	SOPHUC();
	SOPHUC(double);
	SOPHUC(double, double);
	SOPHUC operator + (SOPHUC&);
	SOPHUC operator - (SOPHUC&);
	SOPHUC operator * (SOPHUC&);
	SOPHUC operator / (SOPHUC&);
	void Xuat();
	void SetAB(double, double);
	double GetA();
	double GetB();
	~SOPHUC();
};
#endif 

