#include"INTEGER.h"
INTEGER::INTEGER() {
    value = 0;
}


INTEGER::INTEGER(int x) {
    value = x;
}


int INTEGER::GetN() {
    return value;
}


void INTEGER::SetN(int x) {
    value = x;
}


INTEGER::~INTEGER() {}


INTEGER operator + (const INTEGER& a, const INTEGER& b) {
    return INTEGER(a.value + b.value);
}


INTEGER operator - (const INTEGER& a, const INTEGER& b) {
    return INTEGER(a.value - b.value);
}


INTEGER operator * (const INTEGER& a, const INTEGER& b) {
    return INTEGER(a.value * b.value);
}


INTEGER operator / (const INTEGER& a, const INTEGER& b) {
    return INTEGER(a.value / b.value);
}


bool operator == (const INTEGER& a, const INTEGER& b) {
    return a.value == b.value;
}


bool operator != (const INTEGER& a, const INTEGER& b) {
    return a.value != b.value;
}


bool operator < (const INTEGER& a, const INTEGER& b) {
    return a.value < b.value;
}


bool operator <= (const INTEGER& a, const INTEGER& b) {
    return a.value <= b.value;
}


bool operator > (const INTEGER& a, const INTEGER& b) {
    return a.value > b.value;
}


bool operator >= (const INTEGER& a, const INTEGER& b) {
    return a.value >= b.value;
}


istream& operator >> (istream& in, INTEGER& a) {
    in >> a.value;
    return in;
}


ostream& operator << (ostream& out, INTEGER& a) {
    out << a.value;
    return out;
}


bool INTEGER::KTraSoNguyenTo() {
    if (value < 2) {
        return false;
    }
    if (value == 2) return true;
    for (int i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}


bool INTEGER::KTraSoChinhPhuong() {
    int x = sqrt(value);
    return x * x == value;
}


bool INTEGER::KTraSoHoanThien() {
    int sum = 0;
    for (int i = 1; i <= value / 2; i++) {
        if (value % i == 0) {
            sum += i;
        }
    }
    return sum == value;
}


bool INTEGER::KtraSoDoiXung() {
    int x = value;
    int reverse = 0;
    while (x != 0) {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    return value == reverse;
}


INTEGER INTEGER::operator++() {
    value++;
    return *this;
}


INTEGER INTEGER::operator++(int) {
    INTEGER temp = *this;
    value++;
    return temp;
}


INTEGER INTEGER::operator--() {
    value--;
    return *this;
}


INTEGER INTEGER::operator--(int) {
    INTEGER temp = *this;
    value--;
    return temp;
}


INTEGER INTEGER::operator += (const INTEGER& other) {
    value += other.value;
    return *this;
}