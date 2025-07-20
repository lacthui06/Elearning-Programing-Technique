#pragma once
#include <iostream>
#include <string>
using namespace std;

// Khai bao va cai dat lop Employee
class Employee
{
protected:
   string firstName;
   string lastName;
   string socialSecurityNumber;
public:
   Employee(string _fn = "", string _ln = "", string _scn = "")
   {
      firstName = _fn;
      lastName = _ln;
      socialSecurityNumber = _scn;
   }
   virtual double earnings() const {return 0;};
   virtual void print() const
   {
      cout << "First name: " << firstName << '\t' << "Last name: " << lastName<<endl;
      cout << "Social Security Number: " << socialSecurityNumber;
   }
   string getFirstName() const
   {
      return firstName;
   }
   string getLastName() const
   {
      return lastName;
   }
   void setSocialSecurityNumber(string _socialSecurityNumber)
   {
      socialSecurityNumber = _socialSecurityNumber;
   }
   string getSocialSecurityNumber() const
   {
      return socialSecurityNumber;
   }
};