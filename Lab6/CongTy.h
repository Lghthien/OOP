#pragma once
#ifndef _CongTy
#include"NhanVien.h"
#include"NhanVienBienChe.h"
#include"NhanVienHopDong.h"
class CONGTY {
protected:
	NV** p;
	int sl;
public:
	CONGTY();
	~CONGTY();
	int GetSoLuong();
	void Nhap();
	void Xuat();
	NV* Nhap1();
	void LietKeNVBCCohslTren3_5();
	int DemSoLuongNVHDCoSoNgayCong26();
    double TinhTongTienLuongPhongKeToan();
	double TienLuongTB_NVBC();
	bool KiemTraNhanVienKhongDiLamNgayNao();
	void TimCacNhanVienCohslcaonhat();
	void SapXepNhanVienTangDanTheoMaSo();
	void Them1NVmoi();
	void Xoa1NVCoMaDoNguoiDungNhap();
};
#endif // !_CongTy

