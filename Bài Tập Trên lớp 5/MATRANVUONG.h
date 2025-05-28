#pragma once
#ifndef _MATRANVUONG
#include<iostream>
#include <math.h>
#include <cstdlib>
#include<algorithm>
#include<fstream>
using namespace std;
class MTV {
private:
	int n;
	int** p;
public:
	MTV();
	MTV(int);
	MTV(const MTV&);
	~MTV();
	int getN();
	friend istream& operator >> (istream&, MTV&);
	friend ostream& operator << (ostream&, MTV&);
	void tu_dong_phat_sinh_phan_tu_mang();
	void liet_ke_gia_tri_phan_tu_le();
	int dem_so_luong_phan_tu_co_ky_so_cuoi_la_3();
	bool kiem_tra_phan_tu_am_nua_mang_tren();
	int tim_phan_tu_chan_dau_tien_o_nua_mang_vuong_phia_duoi_duong_cheo_phu_cua_ma_tran();
	void sap_xep_phan_tu_giam_dan_tren_duong_cheo_phu();
};
#endif // !_MATRANVUONG
