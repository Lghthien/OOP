#include"DATHUC.h"
DT::DT() {
    coeffs.push_back(0);
}


DT::DT(double arr[], int n) {
    for (int i = 0; i <= n; i++) {
        coeffs.push_back(arr[i]);
    }
}


DT::DT(const DT& other) {
    coeffs = other.coeffs;
}


DT::DT(vector<double> v) {
    coeffs = v;
}

DT::~DT() {}

int DT::getBat() {
    return coeffs.size() - 1;
}


double* DT::getDT() {
    double* arr = new double[coeffs.size()];
    for (int i = 0; i < coeffs.size(); i++) {
        arr[i] = coeffs[i];
    }
    return arr;
}


void DT::setDT(DT other) {
    coeffs = other.coeffs;
}


istream& operator >> (istream& in, DT& p) {
    while (!p.coeffs.empty()) {
        p.coeffs.pop_back();
    }
    cout << "Nhap so bat cua da thuc: ";
    int n;
    in >> n;
    for (int i = 0; i <= n; i++) {
        double coef;
        cout << "Nhap he so bat " << i<<": ";
        in >> coef;
        p.coeffs.push_back(coef);
    }
    while (p.coeffs[n] == 0) {
        p.coeffs.pop_back();
        n--;
    }
    return in;
}


ostream& operator << (ostream& out, DT& p) {
    int n = p.getBat();
    for (int i = n; i >= 0; i--) {
        if (i == n) {
            if (p.coeffs[i] == 1) {
                out << "x^" << i << " ";
            }
            else if (p.coeffs[i] == -1) {
                out << "-x^" << i << " ";
            }
            else {
                out << p.coeffs[i] << "x^" << i << " ";
            }
        }
        else if (i > 1) {
            if (p.coeffs[i] == 1) {
                out << "+" << "x^" << i << " ";
            }
            else if (p.coeffs[i] == -1) {
                out << "-" << "x^" << i << " ";
            }
            else if (p.coeffs[i] == 0) cout << "";
            else if (p.coeffs[i] > 0) {
                out << "+" << p.coeffs[i] << "x^" << i << " ";
            }
            else {
                out << p.coeffs[i] << "x^" << i << " ";
            }
        }
        else if (i == 1) {
            if (p.coeffs[i] == 1) {
                out << "+" << "x" << i << " ";
            }
            else if (p.coeffs[i] == -1) {
                out << "-" << "x" << i << " ";
            }
            else if (p.coeffs[i] == 0) cout << "";
            else if (p.coeffs[i] > 0) {
                out << "+" << p.coeffs[i] << "x ";
            }
            else {
                out << p.coeffs[i] << "x ";
            }
        }
        else {
            if (p.coeffs[i] >= 0) {
                out << "+" << p.coeffs[i];
            }
            else {
                out << p.coeffs[i] ;
            }
        }
    }
    return out;
}

DT operator + (const DT& a, const DT& b) {
    int maxDegree = max(a.coeffs.size() - 1, b.coeffs.size() - 1);
    double* arr = new double[maxDegree + 1];
    for (int i = 0; i <= maxDegree; i++) {
        arr[i] = (i <= a.coeffs.size() - 1 ? a.coeffs[i] : 0) + (i <= b.coeffs.size() - 1 ? b.coeffs[i] : 0);
    }
    DT result(arr, maxDegree);
    delete[] arr;
    return result;
}

DT operator - (const DT& a, const DT& b) {
int maxDegree = max(a.coeffs.size() - 1, b.coeffs.size() - 1);
double* arr = new double[maxDegree + 1];
for (int i = 0; i <= maxDegree; i++) {
    arr[i] = (i <= a.coeffs.size() - 1 ? a.coeffs[i] : 0) - (i <= b.coeffs.size() - 1 ? b.coeffs[i] : 0);
}
DT result(arr, maxDegree);
delete[] arr;
return result;
}


DT operator * (const DT& a, const DT& b) {
    int degree = a.coeffs.size() - 1 + b.coeffs.size() - 1;
    double* arr = new double[degree + 1];
    for (int i = 0; i <= degree; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i <= a.coeffs.size() - 1; i++) {
        for (int j = 0; j <= b.coeffs.size() - 1; j++) {
            arr[i + j] += a.coeffs[i] * b.coeffs[j];
        }
    }
    DT result(arr, degree);
    delete[] arr;
    return result;
}

