#pragma once
#ifndef _mang1chieu
#include<iostream>
#include<math.h>;
#include<algorithm>
#include <cstdlib>
#include<vector>
using namespace std;
class M1C {
private:
	int n;
	int *a;
public:
	M1C();
	M1C(int);
	M1C(const M1C&);
	~M1C();
	int getN();
	void TuDongPhatSinh();
	friend istream& operator >> (istream&, M1C&);
	friend ostream& operator << (ostream&, M1C&);
	void tu_dong_phat_sinh_phan_tu_mang();
	bool Checkonguyento(int);
	void Lietkesonguyento();
	bool Checksochinhphuong(int);
	int Demsochinhphuong();
	bool Checksohoanthien(int);
	long Tinhtongsohoanthien();
	bool Checksodoixung(int);
	float Tbcongcacgiatrisodoixung();
	bool Kiemtramangtoanphantule();
	int giatriphantuchanbenhat();
	void sapxepmangtangdan();
	void sapxepmanggiamdan();
	void xoaphantuvitribatki();
	void themphantuvitribatki();
	void timkiemphantugiatribatki();
};
#endif // !_mang1chieu
