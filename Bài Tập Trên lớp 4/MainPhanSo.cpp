#include"PhanSo.h"
#include<windows.h>
int main() {
	PHANSO ps1, ps2, ps;
	int n, t;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly phan so\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap phan so\n";
		cout << "\t\t2.Xuat phan so\n";
		cout << "\t\t3.Cong 2 phan so\n";
		cout << "\t\t4.Tru 2 phan so\n";
		cout << "\t\t5.Nhan 2 phan so\n";
		cout << "\t\t6.Chia 2 phan so\n";
		cout << "\t\t7.So sanh 2 phan so\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> n;
		while (n < 0 || n>7) {
			cout << "Vui long nhap lai yeu cau: ";cin >> n;
		}
		switch (n)
		{
		case 1: {
			cout << "Vui long nhap phan so: \n";
			cin >> ps;
		}break;
		case 2: {
			cout << "Xuat phan so: ";
			cout << ps;
			Sleep(4000);
		}break;
		case 3: {
			PHANSO s;
			cout << "Vui long nhap phan so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap phan so thu hai: \n";
			cin >> ps2;
			s = ps1 + ps2;
			cout << "Tong hai phan so do la: " << s;
			Sleep(4000);
		}break;
		case 4: {
			PHANSO s;
			cout << "Vui long nhap phan so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap phan so thu hai: \n";
			cin >> ps2;
			s = ps1 - ps2;
			cout << "Hieu hai phan so do la: " << s;
			Sleep(4000);
		}break;
		case 5: {
			PHANSO s;
			cout << "Vui long nhap phan so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap phan so thu hai: \n";
			cin >> ps2;
			s = ps1 * ps2;
			cout << "Tich hai phan so do la: " << s;
			Sleep(4000);
		}break;
		case 6: {
			PHANSO s;
			cout << "Vui long nhap phan so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap phan so thu hai: \n";
			cin >> ps2;
			s = ps1 / ps2;
			cout << "Thuong hai phan so do la: " << s;
			Sleep(4000);
		}break;
		case 7: {
			cout << "Vui long nhap phan so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap phan so thu hai: \n";
			cin >> ps2;
			cout << "\t1.Phan so thu nhat bang phan so thu hai\n";
			cout << "\t2.Phan so thu nhat khac phan so thu hai\n";
			cout << "\t3.Phan so thu nhat be hon phan so thu hai\n";
			cout << "\t4.Phan so thu nhat be hon hoac bang phan so thu hai\n";
			cout << "\t5.Phan so thu nhat lon hon phan so thu hai\n";
			cout << "\t6.Phan so thu nhat lon hon hoac bang phan so thu hai\n\n";
			cout << "Vui long lua chon ket qua ban mong muon: ";cin >> t;
			while (t < 1 || t>6) {
				cout << "Vui long nhap lai yeu cau: ";cin >> t;
			}
			switch (t)
			{
			case 1: {
				cout << "Ket qua: ";
				if (ps1 == ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 2: {
				cout << "Ket qua: ";
				if (ps1 != ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 3: {
				cout << "Ket qua: ";
				if (ps1 < ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 4: {
				cout << "Ket qua: ";
				if (ps1 <= ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 5: {
				cout << "Ket qua: ";
				if (ps1 > ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 6: {
				cout << "Ket qua: ";
				if (ps1 >= ps2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			}
		}break;
		}
	} while (n != 0);
	return 0;
}