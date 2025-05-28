#pragma once
#ifndef _CDate
#include<iostream>
#include<math.h>
using namespace std;
class CDate{
private:
	int d;
	int m;
	int y;
public:
	CDate();
	CDate(int);
	CDate(int, int);
	CDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	bool KiemTra();
	friend istream& operator >> (istream& ,CDate&);
	friend ostream& operator << (ostream&,CDate&);
	CDate operator ++ ();
	CDate operator -- ();
	CDate operator ++ (int);
	CDate operator -- (int);
	~CDate();
};
#endif // !_CDate
