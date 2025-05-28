#include<iostream>
#include<stack>
using namespace std;
int xuly(stack<int> a,int n){
	if (n==0) {   
	       cout<<"so nhi phan tuong ung la: 0";
	         return 0;}         
	while(n>0){
     a.push(n%2);
     n/=2;
 }
    cout<<"so nhi phan tuong ung la: ";
    while(!a.empty()){
    	 cout<<a.top();
         a.pop();
	}
}
int main(){
	int n;
	cout<<"vui long so thap phan (n>0): ";cin>>n;
	stack<int> a;
	xuly(a,n);
}

