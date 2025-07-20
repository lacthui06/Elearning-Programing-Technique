#pragma once
#include "employee.h"

// Khai bao va cai dat lop CommissionEmployee
class CommissionEmployee : public Employee
{
protected:
   double grossSales, commissionRate;

public:
   CommissionEmployee(string _fn = "", string _ln = "", string _scn = "", double _grossSales = 0, double _commissionRate = 0)
   {
      firstName = _fn;
      lastName = _ln;
      socialSecurityNumber = _scn;
      grossSales = _grossSales;
      commissionRate = _commissionRate;
   }
   void setGrossSales(double _grossSales)
   {
      grossSales = _grossSales;
   }
   double getGrossSales() const
   {
      return grossSales;
   }
   void setCommissionRate(double _commissionRate)
   {
      commissionRate = _commissionRate;
   }
   double getCommissionRate() const
   {
      return commissionRate;
   }
   friend istream &operator>>(istream &in, CommissionEmployee &ce)
   {
      cout << "Enter first name: ";
      in >> ce.firstName;
      cout << "\nEnter last name: ";
      in >> ce.lastName;
      cout << "\nEnter social Security Number: ";
      in >> ce.socialSecurityNumber;
      cout << "\nEnter grossSales: ";
      in >> ce.grossSales;
      cout << "\nEnter commissionRate: ";
      in >> ce.commissionRate;
      return in;
   }
   void print() const
   {
      cout << "First Name: " << firstName << "\t" << "Last Name: " << lastName
           << "\nSocial Security Number: " << socialSecurityNumber
           << "\nGross Sales: " << grossSales << "\t" << "Commission Rate: " << commissionRate<<endl;
   }
   double earnings() const override
   {
      return grossSales * commissionRate;
   }
};