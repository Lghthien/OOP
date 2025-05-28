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
	friend istream& operator >>(istream&, PT1&);
	friend ostream& operator <<(ostream&, PT1&);
	void GiaiPt();
	~PT1();
};
#endif // !_PTbat1

