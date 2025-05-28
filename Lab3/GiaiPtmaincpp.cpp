#include"GiaiPT2.h"
void main() {
	int t;int n;
	cout << "Day la chuong trinh  giai phuong trinh bat 1 va phuong trinh bat 2\n";
	cout << "--------------------------------------------------------------------\n";
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
			cin >> pt1;
			cout << pt1;
		}break;
		case 2: {
			PT2 pt2;
			cin>>pt2;
			cout<<pt2;
		}break;
		}
		cout << endl<<endl;
	}
}