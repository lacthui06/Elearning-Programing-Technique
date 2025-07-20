#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
   string id, name;
   int year;

public:
   Person(string _id = "1000000000", string _name = "noname", int year = 1900);
   int getYear() const;
   string getName() const;
   void setYear(int _year);
   void setName(string _name);
   void show() const;
   friend istream &operator>>(istream &in, Person &p);
   string gen();
};