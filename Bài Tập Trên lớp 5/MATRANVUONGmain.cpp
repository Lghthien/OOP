#include"MATRANVUONG.h"
#include<windows.h>
int main() {
	ifstream file;
	MTV sp(3);
	sp.tu_dong_phat_sinh_phan_tu_mang();
	int c;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly ma tran vuong\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap ma tran vuong\n";
		cout << "\t\t2.Nhap ma tran vuong(theo file)\n";
		cout << "\t\t3.Xuat ma tran vuong\n";
		cout << "\t\t4.Liet ke gia tri phan tu le\n";
		cout << "\t\t5.Dem so luong phan tu le co ky so cuoi la 3\n";
		cout << "\t\t6.Kiem tra phan tu am nua tren cua ma tran vuong\n";
		cout << "\t\t7.Tim phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran vuong\n";
		cout << "\t\t8.Sap xep giam dan cac phan tu tren duong cheo phu cua ma tran\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>8) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap ma tran:\n ";
			cin >> sp;
		}break;
		case 2: {
			file.open("NhapMTV.txt");
			file >> sp;
			file.close();
		}break;
		case 3: {
			cout << sp;
			cout << endl;
			ofstream xuat("XuatMTV.txt");
			xuat << sp;
			file.close();
			system("pause");
		}break;
		case 4: {
			cout << "Gia tri cac phan tu le cua ma tran vuong la: \n";
			sp.liet_ke_gia_tri_phan_tu_le();
			cout << endl;
			system("pause");
		}break;
		case 5: {
			cout << "So luong cac phan tu le co ky so cuoi la 3 la: ";
			cout << sp.dem_so_luong_phan_tu_co_ky_so_cuoi_la_3();
			cout << endl;
			system("pause");
		}break;
		case 6: {
			if (sp.kiem_tra_phan_tu_am_nua_mang_tren()) {
				cout << "Nua mang tren co phan tu am";
			}
			else {
				cout << "Nua mang tren khong co phan tu am";
			}
			cout << endl;
			system("pause");
		}break;
		case 7: {
			cout << "phan tu chan dau tien o nua mang vuong phia duoi duong cheo phu cua ma tran vuong la:\n ";
				if (sp.tim_phan_tu_chan_dau_tien_o_nua_mang_vuong_phia_duoi_duong_cheo_phu_cua_ma_tran() != -1) {
					cout << sp.tim_phan_tu_chan_dau_tien_o_nua_mang_vuong_phia_duoi_duong_cheo_phu_cua_ma_tran();
				}
				else cout << "Khong co phan tu chan";
			cout << endl;
			system("pause");
		}break;
		case 8: {
			MTV sp1(sp);
			sp1.sap_xep_phan_tu_giam_dan_tren_duong_cheo_phu();
			cout << "Ma tran ban dau: \n";
			cout << sp;
			cout << endl;
			cout << "Ma tran sau khi sap xep: \n";
			cout << sp1;
			cout << endl;
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}