#include"CongTy.h"
CONGTY::CONGTY() {
	sl = 0;
	p = NULL;
}
CONGTY::~CONGTY(){
	if (p == NULL) return;
	else {
		for (int i = 0;i < sl;i++) {
			delete[]p[i];
		}
		delete[]p;
		sl = 0;
	}
}
int CONGTY::GetSoLuong(){
	return sl;
}
void CONGTY::Nhap(){
	int loai;
	cout << "Vui long nhap so luong nhan vien (>0): ";
	cin >> sl;
	while (sl <= 0) {
		cout << "Vui long nhap lai so luong nhan vien (>0): ";
		cin >> sl;
	}
	p = new NV *[sl];
	for (int i = 0;i < sl;i++) {
		cout << "------------------------------------------------\n";
		cout << "Vui long nhap thong tin NV thu " << i + 1 << ": \n";
		cout << "1.Nhan vien bien che \n";
		cout << "2.Nhan vien hop dong \n";
		do {
			cin >> loai;
		}while (loai < 1 || loai>2);
		if (loai == 1) {
			p[i] = new NVBC;
		}
		else {
			p[i] = new NVHD;
		}
		p[i]->Nhap();
	}
}
void CONGTY::Xuat(){
	for (int i = 0;i < sl;i++) {
		p[i]->Xuat();
		cout << "\n";
	}
}
NV* CONGTY::Nhap1(){
	int loai;
	NV *a;
	cout << "------------------------------------------------\n";
	cout << "Vui long nhap thong tin NV \n";
	cout << "1.Nhan vien bien che \n";
	cout << "2.Nhan vien hop dong \n";
	do {
		cin >> loai;
	} while (loai < 1 || loai>2);
	if (loai == 1) {
		a = new NVBC;
	}
	else {
		a = new NVHD;
	}
	a->Nhap();
	return a;
}
void CONGTY::LietKeNVBCCohslTren3_5(){
	for (int i = 0;i < sl;i++) {
		if (p[i]->getLoai() == "NVBC" && p[i]->getHeSoLuong() >= 3.5) {
			cout << *p[i];
		}
	}
}
int CONGTY::DemSoLuongNVHDCoSoNgayCong26(){
	int dem = 0;
	for (int i = 0;i < sl;i++) {
		if (p[i]->getLoai() == "NVHD" && p[i]->getSoNgayCong() == 26) {
			dem++;
		}
	}
	return dem;
}
double CONGTY::TinhTongTienLuongPhongKeToan(){
	double sum=0;
	for (int i = 0;i < sl;i++) {
		if (p[i]->getPhong() == "ke toan") sum += p[i]->getLuong();
	}
	return sum;
}
double CONGTY::TienLuongTB_NVBC(){
	int sum = 0;
	int dem = 0;
	for (int i = 0;i < sl;i++) {
		if (p[i]->getLoai() == "NVBC") {
			dem++;
			sum += p[i]->getLuong();
		}
	}
	return double(sum / dem);
}
bool CONGTY::KiemTraNhanVienKhongDiLamNgayNao(){
	bool ktra=false;
	for (int i = 0;i < sl;i++) {
		if (p[i]->getLoai()=="NVHD"&&p[i]->getSoNgayCong()==0) {
			ktra = true;
		}
	}
	return ktra;
}
void CONGTY::TimCacNhanVienCohslcaonhat(){
	double max = 0;
	for (int i = 0;i< sl;i++) {
		if (p[i]->getLoai() == "NVBC" && p[i]->getHeSoLuong() > max) max = p[i]->getHeSoLuong();
	}
	for (int i = 0;i< sl;i++) {
		if (p[i]->getLoai() == "NVBC" && p[i]->getHeSoLuong() == max) cout<<*p[i];
	}
}
void CONGTY::SapXepNhanVienTangDanTheoMaSo(){
	for (int i = 0;i < sl-1;i++) {
		int min = i;
		for (int j = i + 1;j < sl;j++) {
			if (p[min]->getMa() > p[j]->getMa()) min = j;
		}
		swap(p[min], p[i]);
	}
	Xuat();
}
void CONGTY::Them1NVmoi(){
	NV* e = Nhap1();
	int n;
	cout << "Nhap vi tri ban muon them moi: ";
	cin >> n;
	while (n<0 || n>sl ) {
		cout << "vui long nhap lai vi tri them moi ";
		cin >> n;
	}
	NV** a;
	sl++;
	a = new NV * [sl];
	for (int i = 0;i < n;i++) {
		a[i] = p[i];
	}
	a[n] = e;
	for (int i = n + 1;i < sl;i++) {
		a[i] = p[i - 1];
	}
	p = new NV * [sl];
	for (int i = 0;i < sl;i++) {
		p[i] = a[i];
	}
	Xuat();
}
void CONGTY::Xoa1NVCoMaDoNguoiDungNhap(){
	int n;
	cout << "Nhap vi tri ban muon xoa: ";
	cin >> n;
	while (n<0 || n>sl) {
		cout << "vui long nhap lai vi tri xoa: ";
		cin >> n;
	}
	NV** a;
	sl--;
	a = new NV * [sl];
	for (int i = 0;i < n;i++) {
		a[i] = p[i];
	}
	for (int i = n ;i < sl;i++) {
		a[i] = p[i + 1];
	}
	p = new NV * [sl];
	for (int i = 0;i < sl;i++) {
		p[i] = a[i];
	}
	Xuat();
}