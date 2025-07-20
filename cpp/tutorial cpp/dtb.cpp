#include <iostream>
using namespace std;

int main(){
    float t,l,h,dtb;
    do {cout << "Nhap vao diem Toan : ";
        cin >> t;
        if (t <0 || t>10)
            cout << "Please enter again"<< '\n';}
    while  (t <0 || t>10);
    do {cout << "Nhap vao diem Ly : ";
        cin >> l;
        if (l <0 || l>10)
            cout << "Please enter again"<< '\n';}
    while  (l <0 || l>10);
    do {cout << "Nhap vao diem Hoa : ";
        cin >> h;
        if (h <0 || h>10)
            cout << "Please enter again"<< '\n';}
    while  (h<0 || h>10);
    dtb = (t+l+h)/3;
    if (dtb<5)
        cout<<"Kem";
    else
        if (dtb<7)
            cout <<"Trung binh";
        else
            if (dtb<8)
                cout <<"Kha";
            else
                if (dtb<9)
                    cout<<"gioi";
                else
                    cout<<"xuat";
    return 0;
}