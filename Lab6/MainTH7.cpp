#include"CongTy.h"
#include<windows.h>
int main() {
	CONGTY sp;
	int c;
	do {
		system("cls");
		cout << "\t            =========Menu=========\n";
		cout << "\tDay la chuong trinh quan ly danh sach nhan vien \n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap nhan vien \n";
		cout << "\t\t2.Xuat nhan vien\n";
		cout << "\t\t3.Liet ke cac NVBC co he so luong tren 3.5\n";
		cout << "\t\t4.Dem so luong NVHD co so ngay cong la 26\n";
		cout << "\t\t5.Tinh tong tien luong phong ke toan\n";
		cout << "\t\t6.Tinh trung binh luong phong NVBC\n";
		cout << "\t\t7.Kiem tra nhan vien khong di lam ngay nao\n";
		cout << "\t\t8.Tim cac nhan vien co he so luong cao nhat\n";
		cout << "\t\t9.Xap xep nhan vien tang dan theo ma so \n";
		cout << "\t\t10.Them 1 nhan vien moi \n";
		cout << "\t\t11.Xoa mot nhan vien vi tri bat ki do nguoi dung nhap\n";
		cout << "\t           =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>11) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap nhan vien:\n ";
			sp.Nhap();
		}break;
		case 2: {
			cout << "Cac nhan vien co trong cong ty la:\n";
			sp.Xuat();
			cout << endl;
			system("pause");
		}break;
		case 3: {
			cout << "Cac cac NVBC co he so luong tren 3.5 la:\n";
			sp.LietKeNVBCCohslTren3_5();
			cout << endl;
			system("pause");
		}break;
		case 4: {
			cout << "Co " << sp.DemSoLuongNVHDCoSoNgayCong26() << " NVHD co so ngay cong la 26\n";
			cout << endl;
			system("pause");
		}break;
		case 5: {
			cout << "Tong tien luong phong ke toan la: \n" << sp.TinhTongTienLuongPhongKeToan();
			cout << endl;
			system("pause");
		}break;
		case 6: {
			cout << "Trung binh luong NVBC la: " << sp.TienLuongTB_NVBC();
			cout << endl;
			system("pause");
		}break;
		case 7: {
			if (sp.KiemTraNhanVienKhongDiLamNgayNao()) {
				cout << "Co nhan vien khong di lam ngay nao";
			}
			else cout << "Khong co nhan vien khong di lam ngay nao";
			cout << endl;
			system("pause");
		}break;
		case 8: {
			cout << "Cac nhan vien co he so luong cao nhat la:\n";
			sp.TimCacNhanVienCohslcaonhat();
			cout << endl;
			system("pause");
		}break;
		case 9: {
			sp.SapXepNhanVienTangDanTheoMaSo();
			system("pause");
		}break;
		case 10: {
			sp.Them1NVmoi();
			system("pause");
		}break;
		case 11: {
			sp.Xoa1NVCoMaDoNguoiDungNhap();
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}