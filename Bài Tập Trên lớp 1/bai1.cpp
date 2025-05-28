// Viet chuong trinh nhap vao mot phan so, rut gon phan so xuat ra ket qua
/* - input: tu so, mau so;
   - output: phan so da duoc rut gon
   + Cach thuc hien: chia ca tu va mau cho uoc chung lon nhat.
     Cach tinh uoc chung lon nhat: dung gia thuat o-clit
     Xuat ra man hinh ket qua */
#include<bits/stdc++.h>
using namespace std;
struct PHANSO{
	int ts,ms;
}; 
void NhapPhanSo(PHANSO& a){
   cout<<"Nhap tu so cua phan so : ";
     cin>>a.ts;
    do{ 
	cout<<"Nhap mau so cua phan so (khac 0): ";
     cin>>a.ms;
	} while (a.ms==0);
}
int TimUCLN (int a, int b){
	if (a==0 && b==0 ) return 1;
	if (a==0 || b==0) return a+b;
	a=abs(a);
	b=abs(b);
	while (a!=b){
		if (a>b) a-=b;
		 else b-=a;
	}
  return a;
}
void XuLyPhanSo(PHANSO& a){
	int x=TimUCLN(a.ts,a.ms);
	a.ts/=x;
	a.ms/=x;
}
void XuatKetQua(PHANSO& a){
	cout<<"Ket qua sau khi rut gon cua phan so do la: ";
	if (a.ms<-1) cout<< -a.ts <<"/"<<-a.ms;
	else if (a.ms==-1) cout<<-a.ts;
	else if (a.ms==0) cout <<"Phan so khong ton tai ";
	else if (a.ms==1) cout<<a.ts;
	else cout<<a.ts<<"/"<<a.ms;}
int main(){
	//Khai bao bien
	PHANSO a;
	//Nhap gia tri
	NhapPhanSo(a);
	//Xu ly
	XuLyPhanSo(a);
	//Xuat gia tri
	XuatKetQua(a);
	return 0;
}
