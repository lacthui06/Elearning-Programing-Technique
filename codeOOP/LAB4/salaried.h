#pragma once
#include "employee.h"

// Khai bao va cai dat lop  SalariedEmployee
class SalariedEmployee : public Employee
{
private:
   double weeklySalary;

public:
   SalariedEmployee(string _fn = "", string _ln = "", string _scn = "", double _weeklySalary = 0)
   {
      firstName = _fn;
      lastName = _ln;
      socialSecurityNumber = _scn;
      weeklySalary = _weeklySalary;
   }
   double getWeeklySalary() const
   {
      return weeklySalary;
   }
   void setWeeklySalary(int _weeklySalary)
   {
      weeklySalary = _weeklySalary;
   }
   friend istream &operator>>(istream &in, SalariedEmployee &se)
   {
      cout << "Enter first name: ";
      in >> se.firstName;
      cout << "\nEnter last name: ";
      in >> se.lastName;
      cout << "\nEnter social Security Number: ";
      in >> se.socialSecurityNumber;
      cout << "\nEnter weekly Salary: ";
      in >> se.weeklySalary;
      return in;
   }
   void print() const
   {
      cout << "First Name: " << firstName << "\t" << "Last Name: " << lastName<< endl;
      cout << "Social Security Number: " << socialSecurityNumber<< endl;
      cout << "Weekly Salary: $" <<weeklySalary<< endl;
   }
   double earnings() const override
   {
      return weeklySalary;
   }
};