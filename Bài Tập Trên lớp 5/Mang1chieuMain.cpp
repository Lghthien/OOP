#include"Mang1chieu.h"
#include<windows.h>
int main() {
	M1C sp(5);
	sp.tu_dong_phat_sinh_phan_tu_mang();
	int c;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly mang 1 chieu\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap mang \n";
		cout << "\t\t2.Xuat mang\n";
		cout << "\t\t3.Liet ke so nguyen to\n";
		cout << "\t\t4.Dem so luong so chinh phuong\n";
		cout << "\t\t5.Tinh tong so hoan thien \n";
		cout << "\t\t6.Tinh trung binh cong so doi xung\n";
		cout << "\t\t7.Kiem tra mang co toan phan tu le khong\n";
		cout << "\t\t8.Tim phan tu chan be nhat\n";
		cout << "\t\t9.Xap xep mang tang dan \n";
		cout << "\t\t10.Xap xep mang giam dan \n";
		cout << "\t\t11.Them phan tu o vi  tri bat ki \n";
		cout << "\t\t12.Xoa phan tu o vi tri bat ki \n";
		cout << "\t\t13.Tim kiem phan tu co gia tri bat ki \n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>13) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap ma tran:\n ";
			cin >> sp;
		}break;
		case 2: {
			cout << sp;
			cout << endl;
			system("pause");
		}break;
		case 3: {
			cout << "Cac so nguyen to co trong mang la: ";
			sp.Lietkesonguyento();
			cout << endl;
			system("pause");
		}break;
		case 4: {
			cout << "Co " << sp.Demsochinhphuong() << " so chinh phuong trong mang\n";
			cout << endl;
			system("pause");
		}break;
		case 5: {
			cout << "Tong so hoan thien trong mang la: \n" << sp.Tinhtongsohoanthien();
			cout << endl;
			system("pause");
		}break;
		case 6: {
			cout << "Trung binh cong cac so doi xung co trong mang la: " << sp.Tbcongcacgiatrisodoixung();
			cout << endl;
			system("pause");
		}break;
		case 7: {
			if (sp.Kiemtramangtoanphantule()) {
				cout << "Mang toan bo la phan tu le";
			}
			else cout << "Mang co phan tu chan";
			cout << endl;
			system("pause");
		}break;
		case 8: {
			if (sp.Kiemtramangtoanphantule()) cout << "Mang khong co phan tu chan";
			else cout << "Phan tu chan be nhat trong mang la:" << sp.giatriphantuchanbenhat();
			cout << endl;
			system("pause");
		}break;
		case 9: {
			sp.sapxepmangtangdan();
			system("pause");
		}break;
		case 10: {
			sp.sapxepmanggiamdan();
			system("pause");
		}break;
		case 11: {
			sp.themphantuvitribatki();
			system("pause");
		}break;
		case 12: {
			sp.xoaphantuvitribatki();
			system("pause");
		}break;
		case 13: {
			sp.timkiemphantugiatribatki();
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}