//Viet chuong trinh mo phong tro choi oan tu ti voi may
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void MoPhongTroChoi(){
	int c;
  do{ 
    srand(time(NULL));
	int b=rand() % 3 + 0,a;
	cout<<"Xin moi ban chon: "<<endl<<"Chon bua bam so 0"<<endl<<"Chon bao bam so 1"<<endl<<"Chon keo bam so 2"<<endl;
	cin>>a;
	while(a<0||a>2){
		cout<<"Xin vui long nhap lai: ";
		cin>>a;
	}
	cout<<endl;
	if(b==0) cout<<"May ra bua"<<endl;
	else if (b==1) cout<<"May ra bao"<<endl;
	else if (b==2) cout<<"May ra keo"<<endl;
	cout<<endl;
	if (a==0) { if(b==0) cout<<"Ban hoa"<<endl;
	            else if(b==2) cout<<"Ban thang"<<endl;
				else cout<<"Ban thua"<<endl;	
	}
	else if (a==1) { if(b==1) cout<<"Ban hoa"<<endl;
	            else if(b==0) cout<<"Ban thang"<<endl;
				else cout<<"Ban thua"<<endl;	
	}
	else { if(b==2) cout<<"Ban hoa"<<endl;
	            else if(b==1) cout<<"Ban thang"<<endl;
				else cout<<"Ban thua"<<endl;	
	}
	cout<<endl;
	cout<<"Ban co muon choi tiep khong ?"<<endl<<"Co chon 1"<<endl<<"Khong chon 0"<<endl;
    cin>>c;
    while(c<0||c>1){
		cout<<"Xin vui long nhap lai: ";
		cin>>c;
	}
	cout<<endl;
   }while(c==1);
   cout<<endl;
   if(c==0) cout<<"chuong trinh tro choi ket thuc";
}
int main(){
	MoPhongTroChoi();
	return 0;
}
