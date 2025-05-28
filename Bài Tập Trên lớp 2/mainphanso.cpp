#include"phanso.h"
int main() {
	int n, t;
	PHANSO a, b;
	cout << "Day la chuong trinh xu ly phan so\n";
	do {
		cout << "----------------------------------------\n";
		cout << "Chon yeu cau cua ban: " << endl;
		cout << "1.Nhap phan so" << endl;
		cout << "2.Xuat Phan So" << endl;
		cout << "3.Tong 2 phan so " << endl;
		cout << "4.Hieu 2 phan so " << endl;
		cout << "5.Tich 2 phan so " << endl;
		cout << "6.Thuong 2 phan so " << endl;
		cout << "7.Qui doi sang so thuc " << endl;
		cout << "0.Thoat chuong trinh" << endl;
		cin >> n;
		while (n < 0 || n>7) {
			cout << "vui long nhap lai yeu cau: ";
			cin >> n;
		}
		cout << endl;
		switch (n)
		{
		case 0: {
			return 0;
		}break;
		case 1: {
			cout << "Nhap phan so thu nhat: " << endl << endl;
			a.Nhap();
			cout << endl;
			cout << "Nhap phan so thu hai: " << endl << endl;
			b.Nhap();
			cout << endl;
		}break;
		case 2: {
			cout << "Xuat phan so thu nhat" << endl;
			a.Xuat();cout << endl;
			cout << "Xuat phan so thu hai" << endl;
			b.Xuat();
			cout << endl;
		}break;
		case 3: {
			PHANSO Tong = a + b;
			a.Xuat();cout << " + ";b.Xuat();cout << " = ";Tong.Xuly();Tong.Xuat();
			cout << endl;
		}
			  break;
		case 4: {
			PHANSO Hieu = a - b;
			a.Xuat();cout << " - ";b.Xuat();cout << " = ";Hieu.Xuly();Hieu.Xuat();
			cout << endl;
		}
			  break;
		case 5: {
			PHANSO Tich = a * b;
			a.Xuat();cout << " * ";b.Xuat();cout << " = ";Tich.Xuly();Tich.Xuat();
			cout << endl;
		}
			  break;
		case 6: {
			PHANSO Thuong = a / b;
			a.Xuat();cout << " / ";b.Xuat();cout << " = ";Thuong.Xuly();Thuong.Xuat();
			cout << endl;
		}
			  break;
		case 7: {
			cout << "Phan so thu nhat qui ve so thuc la: " << a.QuiDoisoThuc() << endl;
			cout << "Phan so thu hai qui ve so thuc la: " << b.QuiDoisoThuc() << endl<<endl;
		}break;
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
