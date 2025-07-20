// implementation - cai dat lop
# include "MyRectangle.h"
#include <cstring>
int MyRectangle :: count = 0;

MyRectangle :: MyRectangle(float len, float wid, char *color) : a(2)
{
    this->len = len;
    this->wid = wid;
    this->color = new char [strlen(color) + 1];
    strcpy_s(this->color, strlen(color) + 1, color);
    count ++;
}
MyRectangle :: MyRectangle (const MyRectangle &r) : a(3)
{
    count ++;
}
MyRectangle :: MyRectangle() : a(1)
// ham khoi tao mac dinh la ham k co tham so(default constructor)
{
    len = 1, wid = 1;
    color = new char [10];
    strcpy_s(color, 10, "white"); // ham moi 
    count ++;
}

MyRectangle :: ~MyRectangle()
{
    cout<<"Destructor is called\n";
    if (color != NULL)
        delete(color);
    count --;
}

float MyRectangle :: getlen() const
{
    //cout<<wid;
    return this->len;
}
float MyRectangle :: getwid() const
{
    return wid;
    count ++;
}
char * MyRectangle :: getcolor() const
{
    return color;
    count ++;
}
int MyRectangle :: getCount()
{
    return count;
}
int MyRectangle :: getA() const
{
    return a;
}
float MyRectangle :: area()
{
    return len * wid;
    count ++;
}

void MyRectangle :: setlen(float newlen)
{
    if (newlen > 0 && newlen > wid)
        len = newlen;
    else cout<<"DU MA MAY\n";
    count ++;
}
void MyRectangle :: setwid(float newwid)
{
    if (newwid > 0 && newwid < len)
        wid = newwid;
    else cout<<"SAI CCBM ROI\n";
    count ++;
}
void MyRectangle :: input()
{
    do {
        cout << "Nhap chieu dai va chieu rong : ";
        cin >> len >> wid;
    } while (len <= 0 || wid <= 0 ||len < wid);
    count ++;
}
void MyRectangle :: print()
{
    cout << len << " x " << wid << endl;
    //r1.len = 2; nhu the nay thi chay duoc
    cout<< "Color "<< color<< endl;
    count ++;
}
MyRectangle MyRectangle :: scaleUp1(int i)// ham tra ve doi tuong
{
    //thay doi hcn ban dau
    len = len * i;
    wid = wid * i;
    return *this;
}
MyRectangle MyRectangle :: scaleUp2(int i)
{
    // tao hcn moi gap hcn i lan
    /*MyRectangle newR;
    newR.len = len * i;
    newR.wid = wid * i;
    return newR;*/
    return MyRectangle ((len * i),(wid * i), color);
}
MyRectangle &MyRectangle :: scaleUp3(int i)// ham tra ve doi tuong
{
    //thay doi hcn ban dau
    len = len * i;
    wid = wid * i;
    return *this;
}