#include"MATRANVUONG.h"
MTV::MTV():n(0),p(NULL){}
MTV::MTV(int n):n(n) {
	while (n < 1) {
		cout << "Nhap lai n:";
		cin >> this->n;
	}
	p = new int*[this->n];
	for (int i = 0;i < this->n;i++) {
		p[i] = new int[this->n];
	}
	for (int i = 0;i < this->n;i++) {
		for (int j = 0;j < this->n;j++) {
			p[i][j] = 0;
		}
	}
}
MTV::MTV(const MTV&x){
	this->n = x.n;
	p = new int* [n];
	for (int i = 0;i < n;i++) {
		p[i] = new int[n];
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			p[i][j] = x.p[i][j];
		}
	}
}
MTV::~MTV(){
	for (int i = 0;i < n;i++) {
		delete[] p[i];
	}
	delete[] p;
}
int MTV::getN(){
	return n;
}
istream& operator >> (istream& in, MTV& x){
	cout << "Nhap kich thuoc ma tran: ";
	in >> x.n;
	while (x.n < 1) {
		cout << "Nhap lai n:";
		cin >> x.n;
	}
	x.p = new int* [x.n];
	for (int i = 0;i < x.n;i++) {
		x.p[i] = new int[x.n];
	}
	cout << "Nhap ma tran: \n";
	for (int i = 0;i < x.n;i++) {
		for (int j = 0;j < x.n;j++) {
			cout << "a[" << i+1 << "][" << j+1 << "] :";
			in >> x.p[i][j];
		}
	}
	return in;
}
ostream& operator << (ostream& out, MTV& x){
	for (int i = 0;i < x.n;i++) {
		for (int j = 0;j < x.n;j++) {
			out << x.p[i][j] <<" ";
		}
		out << "\n";
	}
	return out;
}
void MTV::tu_dong_phat_sinh_phan_tu_mang() {
	srand(time(0));
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			p[i][j]= -30 + (int)(rand() * (30 + 30 + 1.0) / (1.0 + RAND_MAX));
		}
	}
}
void MTV::liet_ke_gia_tri_phan_tu_le(){
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (p[i][j] % 2 != 0) cout << p[i][j]<<" ";
		}
	}
}
int MTV::dem_so_luong_phan_tu_co_ky_so_cuoi_la_3(){
	int dem = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (p[i][j] % 10 == 3) dem++;
		}
	}
	return dem;
}
bool MTV::kiem_tra_phan_tu_am_nua_mang_tren(){
	for (int i = 0;i < n;i++) {
		for (int j = i;j < n;j++) {
			if (p[i][j] <0 ) return true;
		}
	}
	return false;
}
int MTV::tim_phan_tu_chan_dau_tien_o_nua_mang_vuong_phia_duoi_duong_cheo_phu_cua_ma_tran(){
	for (int i = 0;i < n;i++) {
		for (int j = n-i-1;j <n;j++) {
			if (p[i][j] %2 == 0) return p[i][j];
		}
	}
	return -1;
}
void MTV::sap_xep_phan_tu_giam_dan_tren_duong_cheo_phu(){
	int* a = new int[n];
	for (int i = 0;i < n;i++) {
		a[i]=p[i][n - 1 - i];
	   }
	for (int i = 0;i < n-1;i++) {
		int min = i;
		for (int j = i + 1;j < n;j++) {
			if (a[min] < a[j]) min = j;
		}
		swap(a[i], a[min]);
	}
	for (int i = 0;i < n;i++) {
		p[i][n - 1 - i] = a[i];
	}
}