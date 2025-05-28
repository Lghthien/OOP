#include"Diem3Cmau.h"
#include"Diem3Cmaubai4.h"
#include"Diem2Cmau.h"
int main() {
	int n, t;
	do {
		cout << "Day la chuong trinh xu ly cac tac vu tren diem \n";
		cout << "------------------------------------------------\n";
		cout << "Vui long chon yeu cau\n";
		cout << "0.Thoat khoi chuong trinh \n";
		cout << "1.Bai 1 ( diem 3 chieu )\n";
		cout << "2.Bai 2 ( diem 3 chieu mau )\n";
		cout << "3.Bai 3 ( diem 2 chieu mau)\n";
		cout << "4.Bai 4 ( diem 3 chieu mau)\n";
		cin >> n;
		while (n < 0 || n>4) {
			cout << "vui long nhap lai yeu cau";
			cin >> n;
		}
		switch (n)
		{
		case 0: {
			return 0;
		}  break;
		case 1: {system("cls");
			    D3C diem;cout << endl;
			do {
				system("cls");
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap diem\n";
				cout << "2.Xuat diem\n";
				cout << "3.Di chuyen diem \n";
				cout << "4.Tinh khoang cach 2 diem\n";
				cout << "5.Lay doi xung qua goc toa do\n";
				cout << "6.Tinh chu vi tam giac\n";
				cout << "7.Tinh dien tich tam giac\n";
				cin >> t;
				while (t < 0 || t>7) {
					cout << "vui long nhap lai yeu cau: ";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> diem;
				}break;
				case 2: {
					cout << diem;
					system("pause");
				}break;
				case 3: {
					double x1, x2, x3;
					cout << "Dich chuyen hoanh do: ";cin >> x1;cout << endl;
					cout << "Dich chuyen tung do: ";cin >> x2;cout << endl;
					cout << "Dich chuyen cao do:";cin >> x3;
					diem.DiChuyenDiem(x1, x2, x3);
					system("pause");
				}break;
				case 4: {
					D3C diem1;
					cout << "Nhap diem tiep theo: " << endl;
					cin >> diem1;
					cout << "Khoang cach giua 2 diem la: ";
					cout << diem.TinhKhoangCach2Diem(diem1);
					cout << endl;
					system("pause");
				}break;
				case 5: {
					D3C d1 = diem.LayDoiXungQuaGocToaDo();
					cout << d1;
					cout << endl;
					system("pause");
				}break;
				case 6: {
					D3C diem1, diem2;
					cout << "Nhap diem thu 2: " << endl;
					cin >> diem1;
					cout << "Nhap diem thu 3: " << endl;
					cin >> diem2;
					cout << "Chu vi tam giac la: " << diem.TinhChuViTamGiac(diem1, diem2);
					cout << endl;
					system("pause");
				}break;
				case 7: {
					D3C diem1, diem2;
					cout << "Nhap diem thu 2: " << endl;
					cin >> diem1;
					cout << "Nhap diem thu 3: " << endl;
					cin >> diem2;
					cout << "Dien tich tam giac la: " << diem.TinhDienTichTamGiac(diem1, diem2);
					cout << endl;
					system("pause");
				}break;
				}
			} while (t != 0);
		}  break;
		case 2: {
			system("cls");
			D3CMAU diem;cout << endl;
			do {
				system("cls");
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap diem\n";
				cout << "2.Xuat diem\n";
				cout << "3.Kiem tra diem trung nhau\n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> diem;
				}break;
				case 2: {
					cout << diem;
					cout << endl;
					system("pause");
				}break;
				case 3: {
					D3CMAU diem1;
					cout << "Nhap diem can so sanh: " << endl;
					cin >> diem1;
					if (diem.KiemTraDiemTrungNhau(diem1)) cout << "hai diem trung nhau.";
					else cout << "hai diem khong trung nhau.";
					cout << endl;
					system("pause");
				}break;
				}
			} while (t != 0);
		}break;
		case 3: {
			system("cls");
			D2CMAU diem;cout << endl;
			do {
				system("cls");
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap diem\n";
				cout << "2.Xuat diem\n";
				cout << "3.Kiem tra diem trung nhau\n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> diem;
				}break;
				case 2: {
					cout << diem;
					cout << endl;
					system("pause");
				}break;
				case 3: {
					D2CMAU diem1;
					cout << "Nhap diem can so sanh: " << endl;
					cin >> diem1;
					if (diem.KiemTraDiemTrungNhau(diem1)) cout << "hai diem trung nhau.";
					else cout << "hai diem khong trung nhau.";
					cout << endl;
					system("pause");
				}break;
				}
			} while (t != 0);
		}break;
		case 4: {
			system("cls");
			D3CMAU4 diem;
			do {
				system("cls");
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap diem\n";
				cout << "2.Xuat diem\n";
				cout << "3.Kiem tra diem trung nhau\n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> diem;
				}break;
				case 2: {
					cout << diem;
					cout << endl;
					system("pause");
				}break;
				case 3: {
					D3CMAU4 diem1;
					cout << "Nhap diem can so sanh: " << endl;
					cin >> diem1;
					if (diem.KiemTraDiemTrungNhau(diem1)) cout << "hai diem trung nhau.";
					else cout << "hai diem khong trung nhau.";
					cout << endl;
					system("pause");
				}break;
				}
			} while (t != 0);
		}break;
		}
	} while (true);
}