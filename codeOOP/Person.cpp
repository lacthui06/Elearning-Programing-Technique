#include "person.h"
#include <string>
Person ::Person(string _id, string _name, int _year)
{
   id = _id;
   name = _name;
   if (_year <= 0)
      year = 1900;
   else
      year = _year;
}
int Person::getYear() const
{
   return year;
}
string Person::getName() const
{
   return name;
}
void Person::setYear(int _year)
{
   if (_year <= 0)
   {
      cout << "Nam sinh khong hop le\n";
      year = 1900;
   }
   else
      year = _year;
}
void Person::setName(string _name)
{
   name = _name;
}
void Person::show() const
{
   cout << "ID: " << id << endl;
   cout << "Name: " << name << endl;
   cout << "Year: " << year << endl;
}
istream &operator>>(istream &in, Person &p)
{
   cout<<"Nhap ID: "; 
   in >> p.id;
   cout << "Nhap ho va ten: ";
   in.ignore();
   getline(in, p.name);
   cout<<"Nhap nam sinh: ";
   in >> p.year;
   return in;
}
string Person::gen()
{
   string output;
   if (year >= 1965 && year <= 1980)
      output = "Gen X";
   else if (year >= 1981 && year <= 1996)
      output = "Gen Y";
   else if (year >= 1997 && year <= 2012)
      output = "Gen Z";
   else if (year >= 2013 && year <= 2025)
      output = "Gen Alpha";
   else
      output = "Undefined";
   return output;
}