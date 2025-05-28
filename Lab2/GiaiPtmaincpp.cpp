#include"GiaiPT.h"
//phuong trinh bat 1: ax+b=0
int main() {
	int t;int n;
	do {
		cout << "Nhap so lan ban muon giai phuong trinh: ";
		cin >> n;
	} while (n <= 0);
	int a[10000];
	for (int i = 0;i < n;i++) {
		cout << "Giai phuong trinh thu " << i + 1 << endl;
		cout << "Vui long chon yeu cau" << endl;
		cout << "1.Giai phuong trinh bat nhat" << endl;
		cout << "2.Giai phuong trinh bat hai" << endl;
		cin >> t;
		while (t < 1 || t>2) {
			cout << "vui long nhap lai: ";
			cin >> t;
		}
		switch (t) {
		case 1: {
			PT1 pt1;
			pt1.Nhap();
			pt1.Xuat();
		}break;
		case 2: {
			PT2 pt2;
			pt2.Nhap();
			pt2.Xuat();
		}break;
		}
		cout << endl;
	}
}