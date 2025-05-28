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
	SOPHUC();
	SOPHUC(double);
	SOPHUC(double, double);
	double Modun();
	friend SOPHUC operator + (const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator - (const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator * (const SOPHUC&, const SOPHUC&);
	friend SOPHUC operator / (const SOPHUC&, const SOPHUC&);
	friend bool operator ==(const SOPHUC&, const SOPHUC&);
	friend bool operator !=(const SOPHUC&, const SOPHUC&);
	friend bool operator <(const SOPHUC&, const SOPHUC&);
	friend bool operator <=(const SOPHUC&, const SOPHUC&);
	friend bool operator >(const SOPHUC&, const SOPHUC&);
	friend bool operator >=(const SOPHUC&, const SOPHUC&);
	friend istream& operator >>(istream&, SOPHUC&);
	friend ostream& operator <<(ostream&, SOPHUC&);
	void SetA(double);
	void SetB(double);
	void SetAB(double, double);
	double GetA();
	double GetB();
	~SOPHUC();
};
#endif 

