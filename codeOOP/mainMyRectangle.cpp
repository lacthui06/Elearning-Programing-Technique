# include "MyRectangle.h"
int main()
{
    cout<<"So doi tuong hien hanh: "<< MyRectangle :: getCount();// out : 0
    //tao doi tuong r1 su dung ham tao mac dinh 
    MyRectangle r1; // tao doi tuong r1
    cout<<"So doi tuong hien hanh: "<< MyRectangle :: getCount();// out : 1
    cout<<"So doi tuong hien hanh: "<< r1.getCount();// out : 1
    r1.print();

    r1.scaleUp1(2).setlen(5); //method chaining

    cout<<"Chieu dai cua r1 : "<< r1.getlen()<< endl;
    MyRectangle r2(3, 2, (char*)"red");
    r2.print();
    //truyen con tro vao r3
    MyRectangle *r3 = new MyRectangle();// no se goi ham default
    //truyen con tro vao r4 co tham so
    MyRectangle *r4 = new MyRectangle (5, 3, (char*)"blue");
    cout<<"So doi tuong hien hanh: "<< r1.getCount();// out : 4
    cout<<"So doi tuong hien hanh: "<< r4->getCount();// out : 4
    // tao doi tuong ham copy
    MyRectangle r5(r2);

    const MyRectangle r6;
    cout<<"Chieu dai r6 : "<<r6.getlen()<< endl;// 1
    //r6.setlen(2); -- error \
    // neu muon k loi phai them const vao

    // trong ham static chi duoc su dung thuoc tinh static / bien static
    r1.setlen(2);
    cout<<r1.getA();
    return 0;
}