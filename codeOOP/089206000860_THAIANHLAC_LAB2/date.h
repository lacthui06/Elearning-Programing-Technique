#pragma once
#include <iostream>
using namespace std;
class Date
{
    private:
      int day, month, year;
    public:
      Date(int d = 1, int m = 1, int y = 1990);
      ~Date();
      int endDayOfMonth() const;
      bool valid() const;
      void print() const;
      int getD() const;
      int getM() const;
      int getY() const;
      // qua tai toan tu ">" la ham thanh vien
      bool operator > (const Date &d) const;
      // qua tai toan tu "<" la ham thanh vien
      friend bool operator < (const Date &d1, const Date &d2);
      friend ostream & operator <<(ostream &out, const Date &d);
      friend istream & operator >>(istream &in, Date &d);
      friend bool operator==(const Date &d1, const Date &d2);
      Date & operator++ (); // tien to
      const Date operator++(int a);//hau to
};