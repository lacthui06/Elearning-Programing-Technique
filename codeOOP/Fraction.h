// khai bao lop interface
# pragma once
#include <iostream>
using namespace std;
class Fraction
{
    // quyen truy cap
    private:
    // khai bao thuoc tinh (data member)
        int numerator, denominator;
    public:
    // khai bao phuong thuc (ham thanh vien)
        void input();
        Fraction add(Fraction f);
        void print();
};