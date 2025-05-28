#pragma once
#ifndef _CTring
#include<iostream>
#include<string.h>
#include<string>
#include<vector>
using namespace std;

class CString {
private:
	string a;
public:
	CString(string = "");
	~CString();
	void SetA(string);
	string GetA();
	CString operator + (const CString&);
	CString& operator = (const CString&);
	bool operator == (const CString&);
	friend istream& operator >> (istream&, CString&);
	friend ostream& operator << (ostream&, const CString&);
};
#endif // !_CTring

