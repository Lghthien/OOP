#pragma once
#ifndef _Bangcuuchuong
#include<iostream>
#include<math.h>
using namespace std;
class BangCuuChuong {
private:
	int m, n;
public:
	BangCuuChuong();
	BangCuuChuong(int);
	BangCuuChuong(int,int);
	void Nhapm();
	void Nhapm_n();
	void CuuChuongDon();
	void CuuChuongTu_m_den_n();
	void CuuChuongTongHop();
	void Xuat();
	~BangCuuChuong();
};
#endif // !_Bangcuuchuong

