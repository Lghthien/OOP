#pragma once
#ifndef _Money
#include<iostream>
#include<math.h>
#include<string.h>
#include<fstream>
using namespace std;
class MONEY {
private:
	int dola;
	int cen;
public:
	MONEY();
	MONEY(int);
	MONEY(int, int);
	MONEY(const MONEY&);
	~MONEY();
	int getDo()const;
	int getCen()const;
	void setDo(int);
	void setCen(int);
	friend istream& operator >>(istream&, MONEY&);
	friend ostream& operator << (ostream&, MONEY&);
	long long doitien();
	MONEY operator++();
	MONEY operator++(int);
};
#endif // !_Money

