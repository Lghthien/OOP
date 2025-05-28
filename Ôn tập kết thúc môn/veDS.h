#pragma once
#ifndef _VeDamSen
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
class VE{
protected:
	string ma;
	string ten;
	int nam;
	int sotro;
public:
	VE(string = "", string = "", int = 1900, int = 0);
	~VE();
	virtual void Nhap();
	virtual void Xuat();
	string getMa();
	void setMa(string);
	string getTen();
	void setTen(string);
	int getNam();
	void setNam(int);
	int getSoTroChoi();
	void setSoTroChoi(int);
	virtual int getGia() = 0;
	virtual string getLoai() = 0;
};
#endif // !



