#include"Mang2Chieu.h"
#include<windows.h>
int main() {
	M2C sp(3,3);
	sp.tu_dong_phat_sinh_phan_tu_mang();
	int c;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly ma tran vuong\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap ma tran \n";
		cout << "\t\t2.Xuat ma tran\n";
		cout << "\t\t3.Liet ke so nguyen to\n";
		cout << "\t\t4.Dem so luong so chinh phuong\n";
		cout << "\t\t5.Tinh tong so hoan thien tren dong\n";
		cout << "\t\t6.Tinh trung binh cong so doi xung\n";
		cout << "\t\t7.Xap xep tang dan phan tu dong K\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>7) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap ma tran:\n";
			cin >> sp;
		}break;
		case 2: {
			cout << sp;
			cout << endl;
			system("pause");
		}break;
		case 3: {
			cout << "Cac so nguyen to co trong ma tran la: ";
			sp.LietKeSoNguyenTo();
			cout << endl;
			system("pause");
		}break;
		case 4: {
			cout << "Co " << sp.DemSoLuongSoChinhPhuong() << " so chinh phuong trong ma tran\n";
			cout << endl;
			system("pause");
		}break;
		case 5: {
			cout << "Tong so hoan thien tren dong: \n" << sp.TinhTongSoHoanThienTrenDong();
			cout << endl;
			system("pause");
		}break;
		case 6: {
			cout << "Trung binh cong cac so doi xung co trong ma tran la: " << sp.TinhTBCongSoDoiXung();
			cout << endl;
			system("pause");
		}break;
		case 7: {
			sp.XapSepTangDanPhanTuDongK();
			cout << endl;
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}