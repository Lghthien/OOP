#include"CTring.h"

CString::CString(string a) : a(a) {};

CString::~CString() {
};

void CString::SetA(string a)
{
	CString s;
	cout << "Thiet lap lai chuoi str: "; cin >> s;
	this->a = s.a;
}

string CString::GetA()
{
	return a;
}

CString CString::operator + (const CString& x)
{
	this->a += x.a;
		return *this;
}
CString& CString::operator = (const CString& x)
{
	this->a = x.a;
	return *this;
}

bool CString::operator == (const CString&x)
{
	if (this->a == x.a)
		return true;
	return false;
}

ostream& operator <<(ostream& out, const CString& x)
{
	if (x.a == "")
		out << "Mang rong." << endl;
	else
		out << x.a << endl;
	return out;
}

istream& operator>>(istream& in, CString& x)
{
	getline(in, x.a);
	return in;
}