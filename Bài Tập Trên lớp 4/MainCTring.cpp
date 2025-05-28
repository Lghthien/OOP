#include"CTring.h"
int main() {
	CString s1, s2, s3, s4;
	cout << "Nhap chuoi thu nhat: ";
	cin >> s1;
	cout << "Nhap chuoi thu 2: ";
	cin >> s2;
	cout << "Cong hai chuoi: ";
	s3 = s1 + s2;
	cout << s3 << endl;
	cout << "Gan chuoi: ";
	s4 = s3;
	cout << s4 << endl;
	if (s1 == s2) {
		cout << "s1 == s2" << endl;
	}
	else {
		cout << "s1 != s2" << endl;
	}
	return 0;
}