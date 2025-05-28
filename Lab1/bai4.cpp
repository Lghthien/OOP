//Nhap ngay thang nam xuat ra ngay ke tiep.
#include<iostream>
using namespace std;
void NhapNgayThangNam(int &d,int &m,int &y){
	do{
		cout<<"vui long nhap ngay: "; 
		  cin>>d;
	}while(d<=0 || d>=32);
	do{
		cout<<"vui long nhap thang: "; 
		  cin>>m;
	}while(m<=0 || m>=13);
	do{
		cout<<"vui long nhap nam: "; 
		  cin>>y;
	}while(y<=0);
}
void KiemTra(int &d,int &m,int &y){
	switch (m){
	    case 2:
			{  if (y%4!=0){
		        while(d<=0 || d>=29){
					cout<<"ngay khong hop le vui long nhap lai: ";cin>>d;
				}
				  } 
				else{
				while(d<=0 || d>=30){
					cout<<"ngay khong hop le vui long nhap lai: ";cin>>d;
				}
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			{
				while(d<=0 || d>=31){
					cout<<"ngay khong hop le vui long nhap lai: ";cin>>d;
				}
				break;
			}
		
	}
 }
}
void NgayTiepTheo(int& d,int& m,int& y){
    switch(m){
    	case 4:
    	case 6:
    	case 9:
    	case 11:
    		{
    			if (d==30){
    				d=1;
				    m+=1;
			} else d+=1;
		break;
 	}
 	    case 2:{
 	    	if (d==28 && y%4!=0){
 	    		d=1;
 	    		m+=1;
			} else if(d==29){
				d=1;
				m+=1;
			} else d+=1;
			break;
		}
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:{
			if (d==31){
    				d=1;
				    m+=1;
			} else d+=1;
			break;
		}
		case 12:{
			if (d==31){
    				d=1;
				    m=1;
				    y+=1;
			} else d+=1;
			break;
		}	
   }
}
void XuatNgayKeTiep(int& d,int& m,int& y){
	cout<<"Ngay ke tiep la: "<<d<<"/"<<m<<"/"<<y;
}
int main(){
	int d,m,y;
	NhapNgayThangNam(d,m,y);
	KiemTra(d,m,y);
	NgayTiepTheo(d,m,y);
	XuatNgayKeTiep(d,m,y);
}
