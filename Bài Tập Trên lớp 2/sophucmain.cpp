#include"sophuc.h"
int main() {
	SOPHUC a, b;
	int n, t;
	cout << "day la chuong trinh tinh toan so phuc \n";
	do {
		cout << "--------------------------------------------\n";
		cout << "1.Nhap so phuc\n";
		cout << "2.Xuat so phuc\n";
		cout << "3.Tinh tong 2 so phuc\n";
		cout << "4.Tinh hieu hai so phuc\n";
		cout << "5.Tinh tich hai so phuc\n";
		cout << "6.Tinh thuong hai so phuc\n";
				cin >> n;
				while (n < 1 || n>6) {
					cout << "vui long nhap lai yeu cau: ";
					cin >> n;
				}
				cout << endl;
				switch (n)
				{
				case 1: {
					cout << "Nhap so phuc thu nhat: " << endl << endl;
					a.Nhap();
					cout << endl;
					cout << "Nhap so phuc thu hai: " << endl << endl;
					b.Nhap();
					cout << endl;
				}break;
				case 2: {
					cout << "Xuat so phuc thu nhat" << endl;
					a.Xuat();cout << endl;
					cout << "Xuat so phuc thu hai" << endl;
					b.Xuat();
					cout << endl;
				}break;
				case 3: {
					SOPHUC Tong = a + b;
					a.Xuat();cout << " + ";b.Xuat();cout << " = ";Tong.Xuat();
					cout << endl;
				}
					  break;
				case 4: {
					SOPHUC Hieu = a - b;
					a.Xuat();cout << " - ";b.Xuat();cout << " = ";Hieu.Xuat();
					cout << endl;
				}
					  break;
				case 5: {
					SOPHUC Tich = a * b;
					a.Xuat();cout << " * ";b.Xuat();cout << " = ";Tich.Xuat();
					cout << endl;
				}
					  break;
				case 6: {
					SOPHUC Thuong = a / b;
					a.Xuat();cout << " / ";b.Xuat();cout << " = ";Thuong.Xuat();
					cout << endl;
				}
					  break;
				}
				cout << "ban co tiep tuc tinh toan khong" << endl;
				cout << "0.Khong" << endl;
				cout << "1.Co" << endl;
				cin >> t;
				while (t < 0 || t>1) {
					cout << "vui long nhap lai yeu cau: ";
					cin >> t;
				}
			} while (t == 1);
		}