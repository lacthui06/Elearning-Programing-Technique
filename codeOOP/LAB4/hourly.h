#pragma once
#include "employee.h"

// Khai bao va cai dat lop  HourlyEmployee
class HourlyEmployee : public Employee
{
private:
   double wage, hours;

public:
   HourlyEmployee(string _fn = "", string _ln = "", string _scn = "", double _wage = 0, double _hours = 0)
   {
      firstName = _fn;
      lastName = _ln;
      socialSecurityNumber = _scn;
      wage = _wage;
      hours = _hours;
   }
   void setWage(double _wage)
   {
      wage = _wage;
   }
   double getWage() const
   {
      return wage;
   }
   void setHours(double _hours)
   {
      hours = _hours;
   }
   double getHours() const
   {
      return hours;
   }
   friend istream &operator>>(istream &in, HourlyEmployee &he)
   {
      cout << "Enter first name: ";
      in >> he.firstName;
      cout << "\nEnter last name: ";
      in >> he.lastName;
      cout << "\nEnter social Security Number: ";
      in >> he.socialSecurityNumber;
      cout << "\nEnter wage: ";
      in >> he.wage;
      cout << "\nEnter hours: ";
      in >> he.hours;
      return in;
   }
   void print() const
   {
      cout << "First Name: " << firstName << "\t" << "Last Name: " << lastName
           << "\nSocial Security Number: " << socialSecurityNumber
           << "\nHourly Wage: $" << wage << "\t" << "Hours Worked: " << hours<<endl;
   }
   double earnings() const
   {
      if (hours > 40)
         return 40 * wage + (hours - 40) * wage * 1.5;
      else
         return wage * hours;
   }
};