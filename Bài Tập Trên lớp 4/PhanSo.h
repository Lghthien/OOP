#pragma once
#ifndef _PHANSO
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
class PHANSO {
private:
	int ts, ms;
public:
	PHANSO();
	PHANSO(int);
	PHANSO(int, int);
	void SetTsMs(int, int);
	int GetTs();
	int GetMs();
	double QuiDoisoThuc();
	void Nhap();
	int TimUCLN();
	void Xuly();
	void Xuat();
	~PHANSO();
	friend PHANSO operator + (const PHANSO&, const PHANSO&);
	friend PHANSO operator - (const PHANSO&, const PHANSO&);
	friend PHANSO operator * (const PHANSO&, const PHANSO&);
	friend PHANSO operator / (const PHANSO&, const PHANSO&);
	friend bool operator == (const PHANSO&, const PHANSO&);
	friend bool operator != (const PHANSO&, const PHANSO&);
	friend bool operator < (const PHANSO&, const PHANSO&);
	friend bool operator <= (const PHANSO&, const PHANSO&);
	friend bool operator > (const PHANSO&, const PHANSO&);
	friend bool operator >= (const PHANSO&, const PHANSO&);
	friend istream& operator >> (istream&, PHANSO&);
	friend ostream& operator << (ostream&, PHANSO&);
	operator double()const;
	PHANSO operator ++();
	PHANSO operator ++(int);
	PHANSO operator --();
	PHANSO operator --(int);
	PHANSO operator += (const PHANSO&);
};
#endif // !_Napchong