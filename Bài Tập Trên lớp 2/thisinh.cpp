#include"thisinh.h"
void Candidate::NhapNgayThangNam() {
	do { 
		cout << "Nhap ngay sinh (1<= ngay sinh <=31): ";
		cin >> day;
	} while (day < 1 || day>31);
	do{
		cout << "Nhap thang sinh (1<= thang sinh <=12): ";
		cin >> month;
	} while (month < 1 || month>12);
	do {
		cout << "Nhap nam sinh (1945<= nam sinh <=2023): ";
		cin >> year;
	} while (year <= 1900);
	switch (month)
	{ 
	case 4: case 6: case 9: case 11: 
		if (day == 31) {
			do {
				cout << "xin vui long nhap lai ngay sinh (1<= ngay sinh <=30): ";
				cin >> day;
			} while (day < 1 || day>30);
		}
		break;
	case 2: {
		if (day > 29 && year % 4 == 0) {
			do {
				cout << "xin vui long nhap lai ngay sinh (1 <=ngay sinh <=29): ";
				cin >> day;
			} while (day < 1 || day>29);
		}
		else if (day > 28 && year % 4 != 0) {
			do {
				cout << "xin vui long nhap lai ngay sinh (1<= ngay sinh <=28): ";
				cin >> day;
			} while (day < 1 || day>28);
		}
	}
	default:
		break;
	}
}
void Candidate:: XuatNgayThangNam() {
	cout << day << "/" << month << "/" <<year;
}
void Candidate::TinhDiemTong() {
	core_sum = core_english + core_literature + core_math;
}
void Candidate::Nhap() {
	cout << endl;
	cin.ignore();
	cout <<"Nhap ma sinh vien: ";getline(cin, code);
	cout << "Nhap ten sinh vien: ";getline(cin, name);
	NhapNgayThangNam();
	do {
		cout << "Nhap diem toan (0<= diem toan <=10): ";cin >> core_math;
	} while (core_math < 0 || core_math>10);
	do {
		cout << "Nhap diem van (0<= diem van <=10): ";cin >> core_literature;
	} while (core_literature < 0 || core_literature>10);
	do {
		cout << "Nhap diem anh (0<= diem anh <=10): ";cin >> core_english;
	} while (core_english < 0 || core_english>10);
	TinhDiemTong();
	
}
void Candidate::Xuat() {
		cout << "Ma sinh vien: ";cout << code << endl;
		cout << "ten sinh vien: ";cout << name << endl;
		cout << "Ngay thang nam sinh: ";XuatNgayThangNam();cout << endl;
		cout << "Diem toan: ";cout << core_math << endl;
		cout << "Diem van: ";cout << core_literature << endl;
		cout << "Diem anh: ";cout << core_english << endl;
		cout << "Diem tong: ";cout << core_sum << endl;
		if (core_sum < 21) cout << "Thi sinh dat loai trung binh\n";
		else if (core_sum < 24) cout << "Thi sinh dat loai kha \n";
		else if (core_sum < 27) cout << "Thi sinh dat loai gioi\n";
		else cout << "Thi sinh doat loai xuat xac\n";
}
void TestCandidate::Nhap(int& n) {
	for (int i = 0;i < n;i++) {
		cout << "Thi sinh thu " << i + 1;
		a[i].Nhap();
		cout << endl;
	}
}
void TestCandidate::Inthongtin(int& n) {
	cout << "Thi sinh co tong diem tren 15 la \n";
	for (int i = 0;i < n;i++) {
		cout << endl;
		if (a[i].core_sum > 15) a[i].Xuat();
	}
}