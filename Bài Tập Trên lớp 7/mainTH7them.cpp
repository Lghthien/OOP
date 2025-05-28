#include"QuanLy.h"
int main() {
	QL sp;
	int c;
	do {
		system("cls");
		cout << "\t            =========Menu=========\n";
		cout << "\tDay la chuong trinh quan ly danh sach doi tuong \n";
		cout << "\t----------------------------------\n";
		cout << "\t\t0.Thoat chuong trinh\n";
		cout << "\t\t1.Nhap doi tuong \n";
		cout << "\t\t2.Xuat doi tuong\n";
		cout << "\t           =========END==========\n";
		cout << "Vui long nhap lua chon: ";cin >> c;
		while (c < 0 || c>2) {
			cout << "Vui long nhap lai yeu cau: ";cin >> c;
		}
		switch (c)
		{
		case 1: {
			cout << "Nhap doi tuong:\n ";
			sp.Nhap();
		}break;
		case 2: {
			cout << "Cac doi tuong co trong danh sach la:\n";
			sp.Xuat();
			cout << endl;
			system("pause");
		}break;
		}
	} while (c != 0);
	return 0;
}