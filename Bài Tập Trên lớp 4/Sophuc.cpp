#include"Sophuc.h"
SOPHUC::SOPHUC():a(0),b(0) {}
SOPHUC::SOPHUC(double a):a(a),b(0){}
SOPHUC::SOPHUC(double a, double b):a(a),b(b){}
SOPHUC operator + (const SOPHUC& x, const SOPHUC& y){
	return SOPHUC(x.a + y.a, x.b + y.b);
}
SOPHUC operator - (const SOPHUC& x, const SOPHUC& y){
    return SOPHUC(x.a - y.a, x.b - y.b);
}
SOPHUC operator * (const SOPHUC& x, const SOPHUC& y){
	return SOPHUC(x.a * y.a - x.b * y.b, x.a * y.b + x.b * y.a);
}
SOPHUC operator / (const SOPHUC& x, const SOPHUC& y){
	return SOPHUC((x.a * y.a + x.b * y.b) / (pow(y.a, 2) + pow(x.b, 2)), (y.a * x.b - x.a * y.b) / (pow(y.a, 2) + pow(y.b, 2)));
}
double SOPHUC::Modun() {
	return sqrt(a * a + b * b);
}
bool operator ==(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) == sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
bool operator !=(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) != sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
bool operator <(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) < sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
bool operator <=(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) <= sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
bool operator >(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) > sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
bool operator >=(const SOPHUC& x, const SOPHUC& y){
	if (sqrt(x.a * x.a + x.b * x.b) >= sqrt(y.a * y.a + y.b * y.b)) return true;
	else return false;
}
istream& operator >>(istream& in, SOPHUC& x){
	cout << "Nhap phan thuc: ";
	in >> x.a;
	cout << "Nhap phan ao: ";
	in >> x.b;
	cout << "\n";
	return in;
}
ostream& operator <<(ostream& out, SOPHUC& x){
	if (x.b == 0) cout << x.a<<"\n";
	else if (x.a == 0)cout << x.b << "i\n";
	else if (x.b > 0) cout << x.a << "+" << x.b << "i\n";
	else cout << x.a << x.b << "i\n";
	return out;
}
void SOPHUC::SetA(double a){
	this->a = a;
}
void SOPHUC::SetB(double b){
	this->b = b;
}
void SOPHUC::SetAB(double a, double b){
	this->a = a;
	this->b = b;
}
double SOPHUC::GetA(){
	return a;
}
double SOPHUC::GetB(){
	return b;
}
SOPHUC::~SOPHUC() {}
