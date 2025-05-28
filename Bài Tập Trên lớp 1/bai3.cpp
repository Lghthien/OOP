#include<bits/stdc++.h>
using namespace std;
struct phanso{
	int a,b;  
	friend phanso operator + (const phanso x, const phanso y){
		phanso tong;
		tong.a = ( x.a * y.b ) + ( y.a * x.b );
		tong.b = x.b * y.b;
	    return tong;
	}
	friend phanso operator - (const phanso x, const phanso y){
		phanso hieu;
		hieu.a = ( x.a * y.b ) - ( y.a * x.b );
		hieu.b = x.b * y.b;
		return hieu;
	}
	friend phanso operator * (const phanso x, const phanso y){
		phanso tich;
		tich.a = x.a * y.a;
		tich.b = x.b * y.b;
		return tich;
	}
	friend phanso operator / (const phanso x, const phanso y){
		phanso thuong;
		thuong.a = x.a * y.b;
		thuong.b = x.b * y.a;
		return thuong;
	}
	
};
void XuatGiaTriPhanSo(phanso t){
	int s= __gcd(t.a,t.b);
	t.a=t.a/s;
	t.b=t.b/s;
	if (t.b<0){
		t.a*=-1;
		t.b*=-1;
	}
	if (t.a%t.b==0) cout<<t.a/t.b;
	else cout<<t.a<<"/"<<t.b;
}
int main(){
	phanso n,m;
	cout<<"Nhap tu so phan so thu nhat: ";cin>>n.a;
	do {cout<<"Nhap mau so phan so thu nhat: ";
	       cin>>n.b;}while(n.b==0);
	
	cout<<"Nhap tu so phan so thu hai: ";cin>>m.a;
	do {cout<<"Nhap mau so phan so thu hai: ";
	        cin>>m.b;}while(m.b==0);
	phanso tong=n+m,hieu=n-m,tich=n*m,thuong=n/m;
	cout<<"2a. Xuat phan so a: ";XuatGiaTriPhanSo(n);cout<<endl;
	cout<<"2a. Xuat phan so b ";XuatGiaTriPhanSo(m);cout<<endl;
	cout<<"2b. Tong hai phan so la: "; XuatGiaTriPhanSo(tong);cout<<endl;
	cout<<"2b. Hieu hai phan so la: "; XuatGiaTriPhanSo(hieu);cout<<endl;
	cout<<"2c. Tich hai phan so la: "; XuatGiaTriPhanSo(tich);cout<<endl;
	cout<<"2c. Thuong hai phan so la: "; XuatGiaTriPhanSo(thuong);cout<<endl;
}
