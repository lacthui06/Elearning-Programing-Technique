# include "Parent.h"
#pragma once
#include <iostream>
class Child : public Parent
{
   private:
      int b;
   public:
      Child(int _a = 0, int _b = 0)
         : Parent (_a), b(_b) // hoi thu neu viet moi (_b) thi sai ntn
      {}
      //C1:Qua tai toan tu = la ham thanh vien co 1 tham so kieu Parent
      //C2: viet ham constrcutor
      Child(Parent p)
      {
         a = p.getA();

      }
      int getB() const {return b;}
      // override lai ham display cua Parent
      void display()
      {
         cout<<"Display of Child\n";
         cout<<"a = "<< a<<endl;
         cout<< "b = "<< b<< endl;
      }
      void func(){};
};