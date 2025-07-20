#include "Child.h"
#include "Parent.h"
int main ()
{
   Parent p1(2), p2(3);
   //p1 = p2; cau lenh gan khong can phai qua tai nen dong nay k bi loi
   Child c1(3, 4);
   
   //p1 = c1; //c1 ke thua th p1 doi tuong cua p1 cung la cua c1 nen chay duoc
   //chuyen kieu ngam dinh cho c1 tu child -> parent
   //chuyen kieu tuong minh (ep kieu) & truyen kieu ngam dinh
   // khi chuyen kieu hay ep kieu thi datatype khong thay doi chi thay doi kieu gia tri
   cout<<p1.getA()<<endl;
   //cout<<p1.getB()<< endl;// error

   c1 = p1; // goi den cocnstructor cua lop CHild co 1 th.so kieu Parent
   cout<< c1.getA()<< endl;//2
   cout<< c1.getB()<< endl;//0 (li do la doc dong 14 di)

   Parent *p3 = new Parent(2);
   Child *c3 = new Child(3,4);

   //p3 = c3;//chuyen kieu ngam dinh cho c3 tu child*->Parent
   cout<< p3->getA()<<endl;//3
   //cout<<p3->getB()<<endl;//error
   c3 = (Child*)p3;//ep kieu p3 tu Parent*->Child* - unsafe(k an toan)
   cout<<c3->getA()<<endl;//2
   cout<<c3->getB()<<endl;// rac

   Parent *p4;

   p4 = new Parent(2);
   p4->display();//goi ham display cua Parent
   
   p4 = new Child(3, 4);
   p4->display(); //goi ham dislay cua Child
   return 0;
}