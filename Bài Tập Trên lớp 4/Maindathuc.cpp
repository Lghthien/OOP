#include"DATHUC.h"
int main() {
	DT a, b, c;
	cout << "Nhap da thuc dau tien: \n";
	cin >> a;
	cout << "Nhap da thuc thu hai: \n";
	cin >> b;
	cout << endl;
	cout << "Da thuc dau tien la: ";
	cout << a << endl;
	cout << "Da thuc thu hai la: ";
	cout << b << endl;
	cout << "Tong 2 da thuc la: ";
	c = a + b;
	cout << c<<endl;
	cout << "Hieu 2 da thuc la: ";
	c = a - b;
	cout << c<<endl;
	cout << "Tich 2 da thuc la: ";
	c = a * b;
	cout << c;
	return 0;
}