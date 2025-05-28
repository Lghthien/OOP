#pragma once
#ifndef _PT2
#include"GiaiPT1.h"
class PT2 {
private:
	PT1 pt1;
	double a, b, c;
public:
	PT2();
	PT2(double, double, double);
	void Nhap();
	void GiaiPt();
	void Xuat();
	friend istream& operator >>(istream&, PT2&);
	friend ostream& operator <<(ostream&, PT2&);
	~PT2();
};
#endif // !_PT2

