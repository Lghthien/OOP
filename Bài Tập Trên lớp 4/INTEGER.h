#pragma once
#ifndef _INTEGER
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
class INTEGER {
private:
	int value;
public:
	INTEGER();
	INTEGER(int);
	int GetN();
	void SetN(int);
	~INTEGER();
	friend INTEGER  operator + (const INTEGER&, const INTEGER&);
	friend INTEGER  operator - (const INTEGER&, const INTEGER&);
	friend INTEGER  operator * (const INTEGER&, const INTEGER&);
	friend INTEGER  operator / (const INTEGER&, const INTEGER&);
	friend bool operator == (const INTEGER&, const INTEGER&);
	friend bool operator != (const INTEGER&, const INTEGER&);
	friend bool operator < (const INTEGER&, const INTEGER&);
	friend bool operator <= (const INTEGER&, const INTEGER&);
	friend bool operator > (const INTEGER&, const INTEGER&);
	friend bool operator >= (const INTEGER&, const INTEGER&);
	friend istream& operator >> (istream&, INTEGER&);
	friend ostream& operator << (ostream&, INTEGER&);
	bool KTraSoNguyenTo();
	bool KTraSoChinhPhuong();
	bool KTraSoHoanThien();
	bool KtraSoDoiXung();
	INTEGER  operator ++();
	INTEGER  operator ++(int);
	INTEGER  operator --();
	INTEGER  operator --(int);
	INTEGER  operator += (const INTEGER&);
};
#endif // !_INTEGER
