#include"Bangcuuchuong.h"
int main(){
	BangCuuChuong a;
	int n, t;
	cout << "Chuong trinh xuat bang cuu chuong \n";
	do {
		cout << "----------------------------------\n";
		cout << "1.In bang cuu chuong m\n";
		cout << "2.In bang cuu chuong tu m den n \n";
		cout << "3.In bang cuu chuong tong hop tu 2 den 9 \n";
		cout << "4.In ra tat ca yeu cau\n";
		cin >> n;
		while (n < 1 || n>4) {
			cout<<"Vui long nhap lai: ";
			cin >> n;
		} 
		switch (n)
		{
		case 1: {
			a.Nhapm();
			a.CuuChuongDon();
		}break;
		case 2: {
			a.Nhapm_n();
			a.CuuChuongTu_m_den_n();
		}break;
		case 3: {
			a.CuuChuongTongHop();
		}break;
		case 4: {
			a.Xuat();
		}break;
		}
		cout << endl;
		cout << "ban co muon tiep tuc su dung \n";
		cout << "1.Co\n";
		cout << "2.Khong\n";
		cin >> t;
		while (t < 1 || t > 2){
			cout<<"Vui long nhap lai: ";
			cin >> t;
		} 
	} while (t == 1);
	return 0;
}