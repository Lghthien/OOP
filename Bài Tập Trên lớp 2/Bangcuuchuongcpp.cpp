#include"Bangcuuchuong.h"
BangCuuChuong::BangCuuChuong(int m=2 , int n=2 ) {
	this->m = m;
	this->n = n;
}
BangCuuChuong::BangCuuChuong(int n) {
	this->n = n;
	m = 2;
}
BangCuuChuong::BangCuuChuong() {
	m = 2;
	n = 2;
}
BangCuuChuong::~BangCuuChuong() {
}
void BangCuuChuong::Nhapm() {
	do {
		cout << "Nhap bang cuu chuong ban muon chon (2<=m<=9): ";
		cin >> m;
	} while (m < 2 || m>9);
}
void BangCuuChuong::Nhapm_n() {
	cout << "Nhap khoang ban muon chon " << endl;
	do {
		cout << "Nhap m (2<=m<=9): ";
		cin >> m;
	} while (m < 2 || m>9);
	do {
		cout << "Nhap n (2<=n<=9): ";
		cin >> n;
	} while ( n<2 || n>9);
}
void BangCuuChuong::CuuChuongDon() {
	for (int i = 1;i < 11;i++) {
		if (i == 10) cout << m << " * " << i << " = " << m * i ;
		else if (i * m < 10 && i != 10)cout << m << " *  " << i << " =  " << m * i ;
		else cout << i << " *  " << m << " = " << m * i ;
		cout << endl;
	}
	cout << endl;
}
void BangCuuChuong::CuuChuongTu_m_den_n() {
	if (m <= n) {
		for (int j = 1;j <= 10;j++) {
			for (int i = m;i <= n;i++) {
				if (j == 10) cout << i << " * " << j << " = " << j * i << " | ";
				else if (i * j < 10 && j != 10)cout << i << " *  " << j << " =  " << j * i << " | ";
				else cout << i << " *  " << j << " = " << j * i << " | ";
			}
			cout << "\n";
		}
	}
	else {
		for (int j = 1;j <= 10;j++) {
			for (int i = m;i >= n;i--) {
				if (j == 10) cout << i << " * " << j << " = " << j * i << " | ";
				else if (i * j < 10 && j != 10)cout << i << " *  " << j << " =  " << j * i << " | ";
				else cout << i << " *  " << j << " = " << j * i << " | ";
			}
			cout << "\n";
		}
	}
	cout << endl;
}
void BangCuuChuong::CuuChuongTongHop() {
	for (int i = 1;i < 10;i++) {
		if (i > 2) cout << i << "|\t";
		else if (i == 2) {
			cout << "  ---------------------------------------------------------------------------------" << endl;
			cout << i << "|\t";
		}
		else {
			cout << " \t";
		}
		for (int j = 1;j <= 10;j++) {
			if (i != 1 && i * j < 10) {
				cout << " " << i * j << "\t";
			}
			else cout << i * j << "\t";
		}
		cout << "\n";
	}
	cout << endl;
}
void BangCuuChuong::Xuat() {
	CuuChuongDon();
	CuuChuongTu_m_den_n();
	CuuChuongTongHop();
}