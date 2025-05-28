//Xuat ra cac to tien menh gia tuong ung
#include<iostream>
using namespace std;
void NhapSoTien(long long& a){
	do{cout<<"Nhap so tien can doi (so tien chia het 50000): ";
	cin>>a;
	}while (a%50000!=0 || a<0 );
}
void XuatRaSoTien(long long a){
	int s;
	s=a/500000;
	cout<<"So to menh gia 500000: "<<s<<" to"<<endl;
	a%=500000;
	s=a/200000;
	cout<<"So to menh gia 200000: "<<s<<" to"<<endl;
	a%=200000;
	s=a/100000;
	cout<<"So to menh gia 100000: "<<s<<" to"<<endl;
	a%=100000;
	s=a/50000;
	cout<<"So to menh gia 50000: "<<s<<" to"<<endl;
}
int main(){
	long long a;
	NhapSoTien(a);
	XuatRaSoTien(a);
}
