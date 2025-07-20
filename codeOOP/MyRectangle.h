// interface - khai bao lop
# pragma once
# include <iostream>
using namespace std;
class MyRectangle
{
    private:// quyen truy cap
    // khai bao thuoc tinh ( thanh vien du lieu )
        float len, wid;
        char *color ;
        static int count; //thuoc tinh tinh(static) de dem so doi tuong hien hanh
        const int a;// thuoc tinh const
    public :
    // khai bao phuong thuc (ham thanh vien)
        float area();
        void input();
        void print();

        MyRectangle();// ham khoi tao mac dinh la ham k co tham so(default constructor)
        MyRectangle(float l, float w);//ham tao co tham so ()
        MyRectangle(const MyRectangle &r);//ham tao sao chep 
        MyRectangle(float len, float wid, char *color);
        
        float getlen() const;
        float getwid() const;
        char * getcolor() const;
        static int getCount();//phuong thuc tinh (static)

        void setlen(float newlen);
        void setwid(float newwid);

        ~MyRectangle();// ham huy
        int getA() const;

        MyRectangle scaleUp1(int i);// ham tra ve doi tuong
        MyRectangle scaleUp2(int i);
        MyRectangle & scaleUp3(int i);// ham tra ve tham chieu den doi tuong

};