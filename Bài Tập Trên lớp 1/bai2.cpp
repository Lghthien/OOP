// Viet chuong trinh nhap vao 2 phan so  xuat ra ket qua phan so lon nhat (co rut gon);
/* - input: tu so, mau so ca 2 phan so;
   - output: phan so lon nhat trong 2 phan so;
    Cach xu ly:
	   quy uoc: -tuso1: tu so phan so thu nhat;
	            -mauso1 : mau so phan so thu nhat; 
	            -tuso2: tu so phan so thu hai;
	            -mauso2 : mau so phan so thu hai; 
	            xu phan so do thanh phan so rut gon va dua ve dang chuan cua phan so (dung cau lenh dieu kien) ;
      so sanh:
       tuso1*mauso2 va tuso2*mauso1
       neu tuso1*mauso2 lon hon tuso2*mauso1 xuat ra phan so thu nhat
       neu tuso1*mauso2 bang tuso2*mauso1 xuat ra phan so thu nhat
       neu neu tuso1*mauso2 nho hon tuso2*mauso1 xuat ra phan so thu hai
*/
#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	int ts,ms;
}; 
void NhapPhanSo(PhanSo& a,PhanSo& b){
   cout<<"Nhap tu so cua phan so thu nhat : ";
     cin>>a.ts;
    do{ 
	cout<<"Nhap mau so cua phan so thu nhat (khac 0): ";
     cin>>a.ms;
	} while (a.ms==0);
 cout<<"Nhap tu so cua phan so thu hai : ";
     cin>>b.ts;
    do{ 
	cout<<"Nhap mau so cua phan so thu hai (khac 0): ";
     cin>>b.ms;
	} while (b.ms==0);
}
int UCLN (int a, int b){
	if (a==0 || b==0) return a+b;
	a=abs(a);
	b=abs(b);
	while (a!=b){
		if (a>b) a-=b;
		 else b-=a;
	}
  return a;
}
void XuLyPhanSo(PhanSo& a,PhanSo& b){
	int x=UCLN(a.ts,a.ms),y=UCLN(b.ts,b.ms);
	a.ts/=x;
	a.ms/=x;
	b.ts/=y;
	b.ms/=y;
	if (a.ms<0){
		a.ts*=-1;
		a.ms*=-1;
	}
	if (b.ms<0){
		b.ts*=-1;
		b.ms*=-1;
	}
}
PhanSo SoSanhPhanSo(PhanSo &a, PhanSo& b){
	if (a.ts*b.ms >= b.ts*a.ms ) return a;
	else return b;
}
void XuatKetQua(PhanSo a){
	cout<<"Phan so lon nhat la: "; 
	if (a.ms<-1) cout<< -a.ts <<"/"<<-a.ms;
	else if (a.ms==-1) cout<<-a.ts;
	else if (a.ms==0) cout <<"Phan so khong ton tai ";
	else if (a.ms==1) cout<<a.ts;
	else cout<<a.ts<<"/"<<a.ms;}
int main(){
	//Khai bao bien
	
	PhanSo a,b;
	
	//Nhap gia tri
	
	NhapPhanSo(a,b);
	
	//Xu ly
	 
	XuLyPhanSo(a,b);
	
	//Xuat gia tri
	
	XuatKetQua(SoSanhPhanSo(a,b));
	
	return 0;
}
