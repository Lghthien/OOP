#pragma once
#ifndef _SinhVien
#include"DoiTuong.h"
class SV :public DT {
protected:
	int n;
	string nk;
	string truong;
	string nganh;
public:
	SV(string = "", int = 1, int = 1, int = 1, string = "", bool = 0, int = 0, string = "", string = "", string = "");
	~SV();
	void Nhap();
	void Xuat();
	int getNam();
	void setNam(int);
	string getNienKhoa();
	void setNienKhoa(string);
	string getTruongSV();
	void setTruongSV(string);
	string getNganhSV();
	void setNganhSV(string);
	string loai();
};
#endif // !_SinhVien
