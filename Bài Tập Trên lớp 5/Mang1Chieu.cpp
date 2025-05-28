#include"Mang1chieu.h"
M1C::M1C() :n(0) {
	a = new int[n];
}
M1C::M1C(int n) :n(n) {
	while (n < 1) {
		cout << "vui long nhap lai n :";
		cin >> this->n;
	}
	a = new int[this->n];
	for (int i = 0;i < this->n;i++) {
		a[i] = 0;
	}
}
M1C::M1C(const M1C& x) {
	n = x.n;
	a = new int[n];
	for (int i = 0;i < n;i++) {
		a[i] = x.a[i];
	}
}
M1C::~M1C() {
	delete[] a;
}
int M1C::getN() {
	return n;
}
void M1C::TuDongPhatSinh() {
	srand(time(0));
	for (int i = 0;i < n;i++) {
		a[i] = -30 + (int)(rand() * (30 + 30 + 1.0) / (1.0 + RAND_MAX));
	}
}
istream& operator >> (istream& in, M1C& x) {
	do {
		cout << "Vui long nhap so phan tu cua mang: ";
		in >> x.n;
	} while (x.n < 1);
	x.a = new int[x.n];
	for (int i = 0;i < x.n;i++) {
		cout << "a[" << i + 1 << "]: ";
		in >> x.a[i];
	}
	return in;
}
ostream& operator << (ostream& out, M1C& x) {
	for (int i = 0;i < x.n;i++) {
		out << x.a[i]<<" ";
	}
	return out;
}
void M1C::tu_dong_phat_sinh_phan_tu_mang() {
	srand(time(0));
	for (int i = 0;i < n;i++) {
			a[i]= -30 + (int)(rand() * (30 + 30 + 1.0) / (1.0 + RAND_MAX));
	}
}
bool M1C::Checkonguyento(int x) {
	if (x < 2) return false;
	else if (x == 2) return true;
	else {
		for (int i = 2;i <= sqrt(x);i++) {
			if (x % i == 0) return false;
		}
	}
	return true;
}
void M1C::Lietkesonguyento() {
	for (int i = 0;i < n;i++) {
		if (Checkonguyento(a[i])) cout << a[i] << " ";
	}
}
bool M1C::Checksochinhphuong(int x) {
	int t = sqrt(x);
	return (t * t == x);
}
int M1C::Demsochinhphuong() {
	int dem = 0;
	for (int i = 0;i < n;i++) {
		if (Checksochinhphuong(a[i])) dem++;
	}
	return dem;
}
bool M1C::Checksohoanthien(int x) {
	int tong = 0;
	for (int i = 1;i < x;i++) {
		if (x % i == 0) tong += i;
	}
	return (tong == x);
}
long M1C::Tinhtongsohoanthien() {
	long tong = 0;
	for (int i = 0;i < n;i++) {
		if (Checksochinhphuong(a[i])) tong += a[i];
	}
	return tong;
}
bool M1C::Checksodoixung(int x) {
	int reversed = 0;
	int temp = x;
	while (temp != 0) {
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	return x == reversed;
}
float M1C::Tbcongcacgiatrisodoixung() {
	int dem = 0;
	int tong = 0;
	for (int i = 0;i < n;i++) {
		if (Checksodoixung(a[i])) {
			tong += a[i];
			dem++;
		}
	}
	return (tong / dem);
}
bool M1C::Kiemtramangtoanphantule() {
	for (int i = 0;i < n;i++) {
		if (a[i] % 2 == 0) return false;
	}
	return true;
}
int M1C::giatriphantuchanbenhat() {
	int min ;
	for (int i = 0;i < n;i++) {
		if (a[i]%2==0) min = a[i];
		break;
	}
	for (int i = 0;i < n;i++) {
		if (a[i] < min && a[i] % 2 == 0) min = a[i];
	}
	return min;
}
void M1C::sapxepmangtangdan() {
	for (int i = 0;i < n - 1;i++) {
		int min = i;
		for (int j = i + 1;j < n;j++) {
			if (a[j] < a[min]) min = j;
		}
		swap(a[min], a[i]);
	}
	cout << "Mang sau khi duoc sap theo thu tu tang dan la: ";
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}
void M1C::sapxepmanggiamdan() {
	for (int i = 0;i < n - 1;i++) {
		int max = i;
		for (int j = i + 1;j < n;j++) {
			if (a[j] > a[max]) max = j;
		}
		swap(a[max], a[i]);
	}
	cout << "Mang sau khi duoc sap theo thu tu giam dan la: ";
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
}
void M1C::xoaphantuvitribatki() {
	int t;
	cout << "vui long nhap vi tri ban muon xoa: ";
	cin >> t;
	t--;
	int* x = new int[n - 1];
	for (int i = 0;i < n-1;i++) {
	    if (i >= t) x[i] = a[i + 1];
		else {
			x[i] = a[i];
		}
	}
	n--;
	a = new int[n];
	for (int i = 0;i < n;i++) {
		a[i] = x[i];
	}
}
void M1C::themphantuvitribatki() {
	int e, t;
	cout << "Nhap phan tu ban muon them vao: ";
	cin >> e;
	cout << "Nhap vi tri ban muon them vao: ";
	cin >> t;
	t--;
	if (t < 0 || t > n) {
		cout << "Vi tri khong hop le!\n";
		return;
	}
	n++;
	int* new_a = new int[n];
	for (int i = 0; i < t; i++) {
		new_a[i] = a[i];
	}
	new_a[t] = e;
	for (int i = t + 1; i < n; i++) {
		new_a[i] = a[i - 1];
	}
	delete[] a;
	a = new_a;
}
void M1C::timkiemphantugiatribatki() {
	int x;
	cout << "Nhap gia tri phan tu ma ban muong tim: ";
	cin >> x;
	for (int i = 0;i < n;i++) {
		if (x == a[i]) {
			cout << "Phan tu co trong mang ";
			return;
		}
	}
	cout << "Phan tu khong co trong mang";
}