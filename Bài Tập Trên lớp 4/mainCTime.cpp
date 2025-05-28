#include"CTime.h"
#include<windows.h>
int main() {
	CTime sp1, sp2, sp;
	int n;
	do {
		system("cls");
		cout << "\t            =========Menu=========\n";
		cout << "\t      Day la chuong trinh xu ly thoi gian\n";
		cout << "\t--------------------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Hien thi phuong thuc thiet lap 1\n";
		cout << "\t\t2.Hien thi phuong thuc thiet lap 2\n";
		cout << "\t\t3.Hien thi phuong thuc thiet lap 3\n";
		cout << "\t\t4.Hien thi phuong thuc thiet lap 4\n";
		cout << "\t\t5.Nhap gio phut giay\n";
		cout << "\t\t6.Xuat gio phut giay\n";
		cout << "\t\t7.Hien thi giay tiep theo (gan truoc)\n";
		cout << "\t\t8.Hien thi giay tiep theo (gan sau)\n";
		cout << "\t\t9.Hien thi giay truoc do (gan truoc)\n";
		cout << "\t\t10.Hien thi giay truoc do (gan sau)\n";
		cout << "\t\t11.Cong mot khoang thoi gian\n";
		cout << "\t\t12.Tru mot khoang thoi gian\n";
		cout << "\t           =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> n;
		while (n < 0 || n>12) {
			cout << "Vui long nhap lai yeu cau: ";cin >> n;
		}
		switch (n)
		{
		case 1: {
			CTime a;
			cout << a;
			Sleep(4000);
		}break;

		case 2: {
			CTime a(10);
			cout << a;
			Sleep(4000);
		}break;

		case 3: {
			CTime a(10, 12);
			cout << a;
			Sleep(4000);
		}break;

		case 4: {
			CTime a(17, 10, 2);
			cout << a;
			Sleep(4000);
		}break;

		case 5: {
			cin >> sp;
		}break;

		case 6: {
			cout << sp;
			Sleep(4000);
		}break;

		case 7: {
			cin >> sp1;
			sp2 = ++sp1;
			cout << "Thoi gian tiep theo la: " << sp2;
			Sleep(4000);
		}break;

		case 8: {
			cin >> sp1;
			sp2 = sp1++;
			cout << "Thoi gian hien tai la: " << sp2;cout << endl;
			cout << "Thoi gian tiep theo la: " << sp1;
			Sleep(4000);
		}break;

		case 9: {
			cin >> sp1;
			sp2 = --sp1;
			cout << "Thoi gian truoc do la: " << sp2;
			Sleep(4000);
		}break;

		case 10: {
			cin >> sp1;
			sp2 = sp1--;
			cout << "Thoi gian hien tai la: " << sp2;cout << endl;
			cout << "Thoi gian truoc do la: " << sp1;
			Sleep(4000);
		}break;

		case 11: {
			int e;
			cin >> sp1;
			cout << "Nhap so giay cong them: ";cin >> e;
			sp2 = sp1 + e;
			cout << "Thoi gian sau khi cong them la: " << sp2;
			Sleep(4000);
		}break;

		case 12: {
			int e;
			cin >> sp1;
			cout << "Nhap so giay tru vao: ";cin >> e;
			sp2 = sp1 - e;
			cout << "Thoi gian sau khi tru la: " << sp2;
			Sleep(4000);
		}break;
		}
	} while (n != 0);
	return 0;
}