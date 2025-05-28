#include<iostream>
using namespace std;
void DiemTrungBinh(int &a){
   if(a<5) cout<<"Yeu";
   else if(a<7) cout<<"Trung Binh";
   else if (a<8) cout<<"Kha";
   else if(a<9) cout<<"Gioi";
   else cout<<"Xuat Sac";
}
int main(){
	int DiemTB;
	do{cout<<"xin vui long nhap diem trung binh(0=<diem=<10): ";
       cin>>DiemTB;
  }while(DiemTB<0||DiemTB>10);
    DiemTrungBinh(DiemTB);
}
