#pragma once
#ifndef CTime
#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
class CTime {
private:
	int h;
	int m;
	int s;
public:
	CTime();
	CTime(int);
	CTime(int, int);
	CTime(int, int,int);
	~CTime();
	void SetHour(int);
	void SetMinute(int);
	void SetSecond(int);
	int GetHour()const;
	int GetMinute()const;
	int GetSecond()const;
	bool CheckTime();
	friend istream& operator >> (istream&, CTime&);
	friend ostream& operator << (ostream&, CTime&);
	friend CTime operator + (CTime&, int);
	friend CTime operator - (CTime&, int);
	CTime operator -- ();
	CTime operator ++();
	CTime operator -- (int);
	CTime operator ++(int);
};
#endif // !CTime

