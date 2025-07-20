#pragma once
#include <iostream>
using namespace std;
class Parent
{
   protected:
      int a;
   public:
      Parent(int _a = 0): a(_a) {}
      int getA() const {return a;}
      virtual void display() // ham ao
      {
         cout<<"Display of Parent\n";
         cout<<"a = "<<a <<endl;
      }
      virtual void func() = 0;
};