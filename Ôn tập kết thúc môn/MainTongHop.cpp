#include"DanhSach.h"
int main() {
		int t;
		system("cls");
		DS a;
		do {
			system("cls");
			cout << "\t Day la chuong trinh xu ly danh sach ve\n";
			cout << "   ------------------------------------------------\n";
			cout << "Vui long chon yeu cau\n";
			cout << "0.Ket thuc chuong trinh\n";
			cout << "1.Nhap danh sach ve\n";
			cout << "2.Xuat xuat danh sach ve\n";
			cout << "3.Tinh Tong tien ve thu duoc\n";
			cout << "4.Cho biet so ve toan phan da duoc ban\n";
			cin >> t;
			while (t < 0 || t>4) {
				cout << "vui long nhap lai yeu cau";
				cin >> t;
			}
			switch (t)
			{
			case 1: {
				cin >> a;
			}break;
			case 2: {
				cout << a;
				cout << endl;
				system("pause");
			}break;
			case 3: {
				cout << "Tong tien ve cong vien thu duoc la: ";
				cout << a.TongTienVe() << " dong";
				cout << endl;
				system("pause");
			}break;
			case 4: {
				cout << "So ve tung phan duoc ban ra la: ";
				cout << a.SoVeTungPhan()<< " ve";
				cout << endl;
				system("pause");
			}break;
			}
		} while (t != 0);
	}