// implementation - cai dat lop
#include "Fraction.h"
void Fraction :: input()
{
    do {
        cout<< "Nhap tu so va mau so (mau so khac 0) : ";
        cin>> numerator >> denominator;
    } while (denominator == 0);
}
Fraction Fraction :: add(Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.denominator + f.numerator * denominator;
    result.denominator = denominator * f.denominator;
    return result;
}
void Fraction :: print()
{   
    int tu, mau;
    mau = denominator;
    tu = numerator;
    if (mau < 0)
    {
        mau = - mau;
        tu = - tu;
    }
    cout << tu << '/' << mau << endl ;
}