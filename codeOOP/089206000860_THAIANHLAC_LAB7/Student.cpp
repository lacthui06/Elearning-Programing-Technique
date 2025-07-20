#include "Student.h"
Student::Student(string id, string name, string group)
    : id(id), name(name), group(group) {}
istream &operator>>(istream &in, Student &s)
{
   cout<<"Enter ID student: "; in>>s.id;
   in.ignore();
   cout<<"Enter name of student: "; getline(in, s.name);
   cout<<"Enter group of student: "; in>>s.group;
   return in;
}
ostream &operator<<(ostream &out, const Student &s)
{
   out << "ID student: "<<s.id<<endl;
   out << "Name of student: "<<s.name<<endl;
   out << "Group of student: "<< s.group<<endl;
   return out;
}
bool operator>(const Student &s1, const Student &s2)
{
   return s1.name > s2.name;
}
bool operator<(const Student &s1, const Student &s2)
{
   return s1.name < s2.name;
}
bool operator==(const Student &s1, const Student &s2)
{
   return s1.id == s2.id;
}
string Student :: getID() { return id; }
string Student :: getName() {return name;}
string Student :: getGroup() {return group;}