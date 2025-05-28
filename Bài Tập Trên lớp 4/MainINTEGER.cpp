#include"INTEGER.h"
#include<windows.h>
int main() {
	INTEGER ps1, ps2, ps;
	int n, t;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly so nguyen\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap so nguyen\n";
		cout << "\t\t2.Xuat so nguyen\n";
		cout << "\t\t3.Cong 2 so nguyen\n";
		cout << "\t\t4.Tru 2 so nguyen\n";
		cout << "\t\t5.Nhan 2 so nguyen\n";
		cout << "\t\t6.Chia 2 so nguyen\n";
		cout << "\t\t7.So sanh 2 so nguyen\n";
		cout << "\t\t8.Kiem tra so nguyen\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> n;
		while (n < 0 || n>8) {
			cout << "Vui long nhap lai yeu cau: ";cin >> n;
		}
		switch (n)
		{
		case 1: {
			cout << "Vui long nhap so: \n";
			cin >> ps;
		}break;
		case 2: {
			cout << "Xuat so: ";
			cout << ps;
			Sleep(4000);
		}break;
		case 3: {
			INTEGER s;
			cout << "Vui long nhap so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap so thu hai: \n";
			cin >> ps2;
			s = ps1 + ps2;
			cout << "Tong hai so do la: " << s;
			Sleep(4000);
		}break;
		case 4: {
			INTEGER s;
			cout << "Vui long nhap so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap so thu hai: \n";
			cin >> ps2;
			s = ps1 - ps2;
			cout << "Hieu hai so do la: " << s;
			Sleep(4000);
		}break;
		case 5: {
			INTEGER s;
			cout << "Vui long nhap so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap so thu hai: \n";
			cin >> ps2;
			s = ps1 * ps2;
			cout << "Tich hai so do la: " << s;
			Sleep(4000);
		}break;
		case 6: {
			INTEGER s;
			cout << "Vui long nhap so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap so thu hai: \n";
			cin >> ps2;
			s = ps1 / ps2;
			cout << "Thuong hai so do la: " << s;
			Sleep(4000);
		}break;
		case 7: {
			cout << "Vui long nhap so thu nhat: \n";
			cin >> ps1;
			cout << "Vui long nhap so thu hai: \n";
			cin >> ps2;
			cout << "\t1.So thu nhat bang so thu hai\n";
			cout << "\t2.So thu nhat khac so thu hai\n";
			cout << "\t3.So thu nhat be hon so thu hai\n";
			cout << "\t4.So thu nhat be hon hoac bang so thu hai\n";
			cout << "\t5.So thu nhat lon hon so thu hai\n";
			cout << "\t6.So thu nhat lon hon hoac bang so thu hai\n\n";
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
		case 8: {
			cout << "Vui long nhap so : \n";
			cin >> ps1;
			cout << "\t1.Kiem tra so chinh phuong\n";
			cout << "\t2.Kiem tra so nguyen to\n";
			cout << "\t3.Kiem tra so doi xung\n";
			cout << "\t4.kiem tra so hoan thien\n";
			cout << "Vui long lua chon ket qua ban mong muon: ";cin >> t;
			while (t < 1 || t>4) {
				cout << "Vui long nhap lai yeu cau: ";cin >> t;
			}
			switch (t)
			{
			case 1: {
				cout << "Ket qua: ";
				if (ps1.KTraSoChinhPhuong()) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 2: {
				cout << "Ket qua: ";
				if (ps1.KTraSoNguyenTo()) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 3: {
				cout << "Ket qua: ";
				if (ps1.KtraSoDoiXung()) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 4: {
				cout << "Ket qua: ";
				if (ps1.KTraSoHoanThien()) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			}
		}break;
		}
	}while (n != 0);
	return 0;
}