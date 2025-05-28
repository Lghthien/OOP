#include"TAMGIAC.h"
#include"HINHCHUNHAT.h"
#include"HINHTRON.h"
#include"DIEM.h"
int main(){
	DIEM diem;
	TAMGIAC tamgiac;
	HINHTRON hinhtron;
	HINHCHUNHAT hinhchunhat;
	int n,t;
	do {
		cout << "Day la chuong trinh xu ly cac tac vu tren diem \n";
		cout << "------------------------------------------------\n";
		cout << "Vui long chon yeu cau\n";
		cout << "0.Thoat khoi chuong trinh \n";
		cout << "1.Xu ly tac vu tren diem \n";
		cout << "2.Xu ly tac vu tam giac\n";
		cout << "3.Xu ly tac vu tren hinh chu nhat\n";
		cout << "4.Xu ly tac vu tren hinh tron\n";
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
		case 1: {
			do {
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap diem\n";
				cout << "2.Xuat diem\n";
				cout << "3.Di chuyen diem \n";
				cout << "4.Tinh khoang cach 2 diem\n";
				cout << "5.Lay doi xung qua goc toa do\n";
				cin >> t;
				while (t < 0 || t>5) {
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
				}break;
				case 3: {
					double x1, x2;
					cout << "Dich chuyen hoanh do: ";cin >> x1;cout << endl;
					cout << "Dich chuyen tung do: ";cin >> x2;
					diem.DiChuyenDiem(x1, x2);
				}break;
				case 4: {
					DIEM diem1;
					cout << "Nhap diem tiep theo: "<<endl;
					cin >> diem1;
					cout << "Khoang cach giua 2 diem la: ";
					cout << diem.TinhKhoangCach2Diem(diem1);
					cout << endl;
				}break;
				case 5: {
					DIEM d1 = diem.LayDoiXungQuaGocToaDo();
					cout << d1;
					cout << endl;
				}break;
				}
			} while (t != 0);
		}  break;
		case 2: {
			do {
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap tam giac\n";
				cout << "2.Xuat tam giac\n";
				cout << "3.Di chuyen tam giac \n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> tamgiac;
				}break;
				case 2: {
					cout << tamgiac;
				}break;
				case 3: {
					double x1, x2;
					cout << "di chuyen trai(-x) phai(+x): ";cin >> x1;
					cout << "di chuyen duoi(-x) tren(+x): ";cin >> x2;
					tamgiac.DiChuyenTamGiac(x1, x2);
				}break;
				}
			} while (t != 0);
		}break;
		case 3: {
			do {
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap hinh chu nhat\n";
				cout << "2.Xuat hinh chu nhat\n";
				cout << "3.Di chuyen hinh chu nhat \n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> hinhchunhat;
				}break;
				case 2: {
					cout << hinhchunhat;
				}break;
				case 3: {
					double x1, x2;
					cout << "di chuyen trai(-x) phai(+x): ";cin >> x1;
					cout << "di chuyen duoi(-x) tren(+x): ";cin >> x2;
					hinhchunhat.DiChuyenHinhChuNhat(x1, x2);
				}break;
				}
			} while (t != 0);
		}break;
		case 4: {
			do {
				cout << "------------------------------------------------\n";
				cout << "Vui long chon yeu cau\n";
				cout << "0.Tro ve yeu cau\n";
				cout << "1.Nhap hinh tron\n";
				cout << "2.Xuat hinh tron\n";
				cout << "3.Di chuyen hinh tron \n";
				cin >> t;
				while (t < 0 || t>3) {
					cout << "vui long nhap lai yeu cau";
					cin >> t;
				}
				switch (t)
				{
				case 1: {
					cin >> hinhtron;
				}break;
				case 2: {
					cout << hinhtron;
				}break;
				case 3: {
					double x1, x2;
					cout << "di chuyen trai(-x) phai(+x): ";cin >> x1;
					cout << "di chuyen duoi(-x) tren(+x): ";cin >> x2;
					hinhtron.DiChuyenDuongTron(x1, x2);
				}break;
				}
			} while (t != 0);
		}break;
		}
	} while (true);
}