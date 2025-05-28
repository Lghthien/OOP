#include"thisinh.h"
int main() {
	TestCandidate x;
	int n;
	cout << "Nhap so luong cac thi sinh: ";
	cin >> n;
	x.Nhap(n);
	x.Inthongtin(n);
	return 0;
}