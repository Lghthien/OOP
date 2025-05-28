#include"MONEY.h"
#include<windows.h>
int main() {
	ifstream file;
	MONEY sp;
	int c;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly so tien\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap so tien\n";
		cout << "\t\t2.Xuat so tien\n";
		cout << "\t\t3.Doi Tien\n";
		cout << "\t\t4.Them 1 cent (gan truoc)\n";
		cout << "\t\t5.Them 1 cent (gan sau)\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>6) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap so tien: \n";
			cin >> sp;
		}break;
		case 2: {
			cout << sp;
			cout << endl;
			ofstream xuat("XuatMONEY.txt");
			xuat << sp;
			file.close();
			system("pause");
		}break;
		case 3: {
			cout<<sp.doitien()<<" dong"<<endl;
			system("pause");
		}break;
		case 4: {
			MONEY sp1;
			sp1 = ++sp;
			cout << "So tien sau khi them 1 cen: " << sp1<<"\n";
			system("pause");
		}break;
		case 5: {
			MONEY sp1;
			sp1 = sp++;
			cout << "So tien truoc khi them 1 cen: " << sp1<<"\n";
			cout << "So tien sau khi them 1 cen: " << sp<<"\n";
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}