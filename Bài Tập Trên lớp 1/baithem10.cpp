/*. Nhap gio vao ca, gio ra ca cua 1 cong nhan. Tinh va in ra tien luong ngay cua cong nhan do.
Biet rang:
• Gio vao ca som nhat la 6h và gio ra ca tre nhat la 18h.
• Tien công truoc 12h la 6000d/gio va sau 12h la 7500d/gio*/
#include<iostream>
using namespace std;
bool Ktraphut(int a,int b){
	if (a==18 && b!=0) return true;
	else return false;
}
bool Ktragiay(int a,int b){
	if (a==18 && b!=0) return true;
	else return false;
}
bool Ktraphutra(int a,int b,int c,int d){
	if (a==b && c>d) return true;
	else return false;
}
bool Ktragiayra(int a,int b,int c,int d,int e,int f){
	if (a==b && c==d && e>f) return true;
	else return false;
}
void Nhap(double &a,double &b){
	int xv,yv,zv,xr,yr,zr;
	do{cout<<"Nhap gio vao ca (6<=giovao<=18): ";
	   cin>>xv;
	}while(xv<6||xv>18);
		do{cout<<"Nhap phut vao ca (0<=phutvao<=59): ";
	   cin>>yv;
	}while(yv<0||yv>59||Ktraphut(xv,yv));
	do{cout<<"Nhap giay vao ca (0<=giayvao<=59): ";
	   cin>>zv;
	}while(zv<0||zv>59||Ktragiay(xv,zv));
	
	a=(1.0*xv+1.0*yv/60+1.0*zv/3600);
	
	cout<<endl;
	
		do{cout<<"Nhap gio ra ca (giovao<=giora<=18): ";
	   cin>>xr;
	}while(xr<xv||xr>18);
		do{cout<<"Nhap phut ra ca (0<=phutvao<=59): ";
	   cin>>yr;
	}while(yr<0||yr>59||Ktraphut(xr,yr)||Ktraphutra(xv,xr,yv,yr));
	do{cout<<"Nhap giay ra ca (0<=giayvao<=59): ";
	   cin>>zr;
	}while(zr<0||zr>59||Ktragiay(xr,zr)||Ktragiayra(xv,xr,yv,yr,zv,zr));
	
	b=(1.0*xr+1.0*yr/60+1.0*zr/3600);
}
double TinhSoTien(double &a, double &b){
	double c;
	if (a<=12  && b<=12) c=(b-a)*6000;
	else if (a<12 && b>12) c=(12-a)*6000+(b-12)*7500;
	else  c=(b-a)*7500;
	return c;
}
int main(){
	double a,b,c;
	Nhap(a,b);
	c=TinhSoTien(a,b);
	cout<<"tien luong ngay cua cong nhan do la: "<<c<<" dong";
	return 0;
}
