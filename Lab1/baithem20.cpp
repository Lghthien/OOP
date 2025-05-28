//Kiem tra so nguyen nhap vao co phai la: so nguyen to, so chinh phuong, so hoan thien, so doi xung hay khong ?
#include<iostream>
#include<math.h>
using namespace std;
bool KiemTraSoNguyenTo(int a){
	if (a<2) return false;
	else if (a==2) return true;
	else for (int i=2; i<= sqrt(a);i++) if (a%i==0) return false;
	return true;
}
bool KiemTraSoChinhPhuong(int a){
	int n;
	n=sqrt(a);
	if (n*n==a) return true;
	else return false;
}
bool KiemTraSoHoanThien(int a){
	int s;
	for (int i=1;i<a;i++){
		if (a%i==0) s+=i;
	}
	if (a==s) return true;
	else return false;
}
bool KiemTraSoDoiXung(int a){
	int s=0,n,b=a;
	while (b>0){
		n=b%10;
		s=s*10+n;
		b/=10;
	}
	if (a!=s) return false;
	else return true;
}
void Xuat(int a){
	if (KiemTraSoNguyenTo(a)) cout<<a<<" la so nguyen to"<<endl;
	   else cout<<a<<" khong phai so nguyen to"<<endl;
	if (KiemTraSoChinhPhuong(a)) cout<<a<<" la so chinh phuong"<<endl;
	   else cout<<a<<" khong phai so chinh phuong"<<endl; 
	if (KiemTraSoHoanThien(a)) cout<<a<<" la so hoan thien"<<endl;
	   else cout<<a<<" khong phai so hoan thien"<<endl;
	if (KiemTraSoDoiXung(a)) cout<<a<<" la so doi xung"<<endl;
	   else cout<<a<<" khong phai so doi xung"<<endl;
}
int main(){
	int a;
	do{cout<<"nhap so nguyen a (a>0): ";
	   cin>>a;	
	} while(a<=0);
	Xuat(a);
}
