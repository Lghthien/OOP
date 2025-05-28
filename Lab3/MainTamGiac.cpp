#include"DIEM.h"
#include"TAMGIAC.h"
int main() {
	TAMGIAC x;
	int n;
	cout << "day la chuong trinh xu ly tam giac khi cho 3 diem\n";
	do {
		cout << "--------------------------------------------------\n";
		cout << "vui long chon yeu cau:\n";
		cout << "0.Ket thuc chuong trinh\n";
		cout << "1.Nhap Tam Giac\n";
		cout << "2.Xuat ra ket qua tam giac\n";
		cin >> n;
		while (n < 0 || n>2) {
			cout << "Vui long nhap lai yeu cau: ";
			cin >> n;
		}
		switch (n){
		case 0: {
			return 0;
		}break;
		case 1: {
			cin >> x;
		}break;
		case 2: {
			cout << x;
		}break;
}
	} while (true);
}