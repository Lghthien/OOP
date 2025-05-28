//Nhap vao username va password. Neu nhap sai qua 3 lan thi in thông bao loi, nguoc lai hien thi cau chao username
//username: hoangthien password: thien123.
#include<iostream>
#include<string.h>
using namespace std;
void xuly(){
	string username,password;
	int i=0;
	do { cout<<"Vui long nhap username: ";
	     getline(cin,username);
	     cout<<"Vui long nhap password: ";
	     getline(cin,password);
		 i++;
	     if (username=="hoangthien"&& password=="thien123"){
	     	cout<<"Xin chao: "<<username;
	     	break;
		 }
		 if(i==3){
		 	cout<<"error";
		 	break;
		 }
	}while (true);
}
int main(){
	xuly();
}
