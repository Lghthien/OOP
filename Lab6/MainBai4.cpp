//#include"Diem3Cmaubai4.h"
//int main() {
//	int t;
//	system("cls");
//	D3CMAU4 diem;
//	do {
//		system("cls");
//		cout << "\t Day la chuong trinh xu ly diem mau\n";
//		cout << "------------------------------------------------\n";
//		cout << "Vui long chon yeu cau\n";
//		cout << "0.Ket thuc chuong trinh\n";
//		cout << "1.Nhap diem\n";
//		cout << "2.Xuat diem\n";
//		cout << "3.Kiem tra diem trung nhau\n";
//		cin >> t;
//		while (t < 0 || t>3) {
//			cout << "vui long nhap lai yeu cau";
//			cin >> t;
//		}
//		switch (t)
//		{
//		case 1: {
//			cin >> diem;
//		}break;
//		case 2: {
//			cout << diem;
//			cout << endl;
//			system("pause");
//		}break;
//		case 3: {
//			D3CMAU4 diem1;
//			cout << "Nhap diem can so sanh: " << endl;
//			cin >> diem1;
//			if (diem.KiemTraDiemTrungNhau(diem1)) cout << "hai diem trung nhau.";
//			else cout << "hai diem khong trung nhau.";
//			cout << endl;
//			system("pause");
//		}break;
//		}
//	} while (t != 0);
//}