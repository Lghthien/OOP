#include"Sophuc.h"
#include<windows.h>
int main() {
	SOPHUC sp1, sp2, sp;
	int n, t;
	do {
		system("cls");
		cout << "\t      =========Menu=========\n";
		cout << "\tDay la chuong trinh xu ly so phuc\n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap so phuc\n";
		cout << "\t\t2.Xuat so phuc\n";
		cout << "\t\t3.Cong 2 so phuc\n";
		cout << "\t\t4.Tru 2 so phuc\n";
		cout << "\t\t5.Nhan 2 so phuc\n";
		cout << "\t\t6.Chia 2 so phuc\n";
		cout << "\t\t7.So sanh 2 so phuc\n";
		cout << "\t      =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> n;
		while (n < 0 || n>7) {
			cout << "Vui long nhap lai yeu cau: ";cin >> n;
		}
		switch (n)
		{
		case 1: {
			cout << "Vui long nhap so phuc: \n";
			cin >> sp;
		}break;
		case 2: {
			cout << "Xuat so phuc: ";
			cout << sp;
			Sleep(4000);
		}break;
		case 3: {
			SOPHUC s;
			cout << "Vui long nhap so phuc thu nhat: \n";
			cin >> sp1;
			cout << "Vui long nhap so phuc thu hai: \n";
			cin >> sp2;
			s = sp1 + sp2;
			cout << "Tong hai so phuc do la: " << s;
			Sleep(4000);
		}break;
		case 4: {
			SOPHUC s;
			cout << "Vui long nhap so phuc thu nhat: \n";
			cin >> sp1;
			cout << "Vui long nhap so phuc thu hai: \n";
			cin >> sp2;
			s = sp1 - sp2;
			cout << "Hieu hai so phuc do la: " << s;
			Sleep(4000);
		}break;
		case 5: {
			SOPHUC s;
			cout << "Vui long nhap so phuc thu nhat: \n";
			cin >> sp1;
			cout << "Vui long nhap so phuc thu hai: \n";
			cin >> sp2;
			s = sp1 * sp2;
			cout << "Tich hai so phuc do la: " << s;
			Sleep(4000);
		}break;
		case 6: {
			SOPHUC s;
			cout << "Vui long nhap so phuc thu nhat: \n";
			cin >> sp1;
			cout << "Vui long nhap so phuc thu hai: \n";
			cin >> sp2;
			s = sp1 / sp2;
			cout << "Thuong hai so phuc do la: " << s;
			Sleep(4000);
		}break;
		case 7: {
			cout << "Vui long nhap so phuc thu nhat: \n";
			cin >> sp1;
			cout << "Vui long nhap so phuc thu hai: \n";
			cin >> sp2;
			cout << "\t1.So phuc thu nhat bang so phuc thu hai\n";
			cout << "\t2.So phuc thu nhat khac so phuc thu hai\n";
			cout << "\t3.So phuc thu nhat be hon so phuc thu hai\n";
			cout << "\t4.So phuc thu nhat be hon hoac bang phuc thu hai\n";
			cout << "\t5.So phuc thu nhat lon hon so phuc thu hai\n";
			cout << "\t6.So phuc thu nhat lon hon hoac bang phuc thu hai\n\n";
			cout << "Vui long lua chon ket qua ban mong muon: ";cin >> t;
			while (t < 1 || t>6) {
				cout << "Vui long nhap lai yeu cau: ";cin >> t;
			}
			switch (t)
			{
			case 1: {
				cout << "Ket qua: ";
				if (sp1 == sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 2: {
				cout << "Ket qua: ";
				if (sp1 != sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 3: {
				cout << "Ket qua: ";
				if (sp1 < sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 4: {
				cout << "Ket qua: ";
				if (sp1 <= sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 5: {
				cout << "Ket qua: ";
				if (sp1 > sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			case 6: {
				cout << "Ket qua: ";
				if (sp1 >= sp2) cout << "true";
				else cout << "flase";
				Sleep(4000);
			}break;
			}
		}break;
		}
	} while (n!=0);
	return 0;
}