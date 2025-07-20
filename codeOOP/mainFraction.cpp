#include "Fraction.h"
int main ()
{
    Fraction f1, f2, f3;// tao doi tuong f1, f2, f3
    // message phai co doi tuong va phuong thuc
    cout << "Nhap phan so thu 1\n";
    f1.input();
    cout << "Nhap phan so thu 2\n";
    f2.input();
    f3 = f1.add(f2);
    cout<< "Tong 2 phan so : ";
    f3.print();
}