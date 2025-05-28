#pragma once
#ifndef _PTbat1
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
class PT1 {
private:
	double b, c;
public:
	PT1();
	PT1(double);
	PT1(double,double);
	void Nhap();
	void GiaiPt();
	void Xuat();
	~PT1();
};
class PT2 {
private:
	PT1 pt1;
	double a,b,c;
public:
	PT2();
	PT2(double, double, double);
	void Nhap();
	void GiaiPt();
	void Xuat();
	~PT2();
};
#endif // !_PTbat1

