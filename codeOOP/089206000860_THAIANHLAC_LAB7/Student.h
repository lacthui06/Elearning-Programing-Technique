#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
class Student
{
   private:
      string id, name, group;
   public:
      Student(string id ="", string name = "", string group = "");
      friend istream & operator >>(istream &in, Student &s);
      friend ostream & operator <<(ostream &out, const Student &s);
      friend bool operator >(const Student &s1, const Student &s2);
      friend bool operator <(const Student &s1, const Student &s2);
      friend bool operator ==(const Student &s1, const Student &s2);
      string getID();
      string getName();
      string getGroup();
};