#pragma once
#ifndef _DaThuc
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class DT {
private:
    vector<double> coeffs;
public:
    DT();
    DT(double arr[], int n);
    DT(const DT&);
    DT(vector<double>);
    ~DT();
    int getBat();
    double* getDT();
    void setDT(DT);
    friend istream& operator >> (istream&, DT&);
    friend ostream& operator << (ostream&, DT&);
    friend DT operator + (const DT&, const DT&);
    friend DT operator - (const DT&, const DT&);
    friend DT operator * (const DT&, const DT&);
};
#endif // !_DaThuc

