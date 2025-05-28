#include"CDate.h"
#include<windows.h>
int main() {
	CDate sp1, sp2, sp;
	int n;
	do {
		system("cls");
		cout << "\t            =========Menu=========\n";
		cout << "\t   Day la chuong trinh xu ly ngay thang nam\n";
		cout << "\t--------------------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Hien thi phuong thuc thiet lap 1\n";
		cout << "\t\t2.Hien thi phuong thuc thiet lap 2\n";
		cout << "\t\t3.Hien thi phuong thuc thiet lap 3\n";
		cout << "\t\t4.Hien thi phuong thuc thiet lap 4\n";
		cout << "\t\t5.Nhap ngay thang nam\n";
		cout << "\t\t6.Xuat ngay thang nam\n";
		cout << "\t\t7.Hien thi ngay mai (gan truoc)\n";
		cout << "\t\t8.Hien thi ngay mai (gan sau)\n";
		cout << "\t\t9.Hien thi hom qua (gan truoc)\n";
		cout << "\t\t10.Hien thi hom qua (gan sau)\n";
		cout << "\t\t11.Cong them mot so ngay\n";
		cout << "\t\t12.Tru bot mot so ngay\n";
		cout << "\t           =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> n;
		while (n < 0 || n>12) {
			cout << "Vui long nhap lai yeu cau: ";cin >> n;
		}
		switch (n)
		{
		case 1: {
			CDate a;
			cout << a;
			Sleep(4000);
		}break;

		case 2: {
			CDate a(10);
			cout << a;
			Sleep(4000);
		}break;

		case 3: {
			CDate a(10, 12);
			cout << a;
			Sleep(4000);
		}break;

		case 4: {
			CDate a(17, 10, 2021);
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
			cout << "Ngay mai la: "<<sp2;
			Sleep(4000);
		}break;

		case 8: {
			cin >> sp1;
			sp2 = sp1++;
			cout << "Ngay hom nay la: " << sp2;cout << endl;
			cout << "Ngay mai la: " << sp1;
			Sleep(4000);
		}break;

		case 9: {
			cin >> sp1;
			sp2 = --sp1;
			cout << "Ngay hom qua la: " << sp2;
			Sleep(4000);
		}break;

		case 10: {
			cin >> sp1;
			sp2 = sp1--;
			cout << "Ngay hom nay la: " << sp2;cout << endl;
			cout << "Ngay hom qua la: " << sp1;
			Sleep(4000);
		}break;

		case 11: {
			int e;
			cin >> sp1;
			cout << "Nhap so ngay ban muon cong them: ";cin >> e;
			sp2 = sp1 + e;
			cout << "Ngay sau khi da cong them la: " << sp2;
			Sleep(4000);
		}break;

		case 12: {
			int e;
			cin >> sp1;
			cout << "Nhap so ngay ban muon tru bot: ";cin >> e;
			sp2 = sp1 - e;
			cout << "Ngay sau khi da tru bot la: " << sp2;
			Sleep(4000);
		}break;
	  }
	} while (n != 0);
	return 0;
}