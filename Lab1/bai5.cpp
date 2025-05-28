//viet chuong trinh nhap ho va ten cua mot sinh vien xuat ket qua ?
#include<iostream>
#include<string>
using namespace std;
class Candidate{
	public:
		string name;
		float math,literatur,mediumcore;
};
void Nhap(Candidate& a){
	cout<<"Nhap thong tin sinh vien: "<<endl;
		cout<<"Ten sinh vien: "; getline(cin, a.name);
		do {
		cout<<"Nhap diem toan (0<=diemtoan<=10): ";cin>>a.math;}
		while(a.math<0||a.math>10);
		do {
		cout<<"Nhap diem van (0<=diemvan<=10): ";cin>>a.literatur;}
		while(a.literatur<0||a.literatur>10);
		a.mediumcore=(a.math+a.literatur)/2;
}
void Xuat(Candidate& a){
   if(a.mediumcore<5) cout<<"sinh vien dat loai yeu";
   else if(a.mediumcore<7) cout<<"sinh vien dat loai trung binh";
   else if (a.mediumcore<8) cout<<"sinh vien dat loai kha";
   else if(a.mediumcore<9) cout<<"sinh vien dat loai gioi";
   else cout<<"sinh vien dat loai xuat xac";
}
int main(){
	Candidate a;
	Nhap(a);
	Xuat(a);
}

