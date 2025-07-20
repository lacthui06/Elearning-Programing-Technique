#pragma once
#include "commission.h"

// Khai bao va cai dat lop  BasePlusCommissionEmployee
class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
   double baseSalary;

public:
   BasePlusCommissionEmployee(string _fn = "", string _ln = "", string _scn = "", double _grossSales = 0, double _commissionRate = 0, int _baseSalary = 0)
   {
      firstName = _fn;
      lastName = _ln;
      socialSecurityNumber = _scn;
      grossSales = _grossSales;
      commissionRate = _commissionRate;
      baseSalary = _baseSalary;
   }
   void setBaseSalary(int _baseSalary)
   {
      baseSalary = _baseSalary;
   }
   double getBaseSalary() const
   {
      return baseSalary;
   }
   friend istream &operator>>(istream &in, BasePlusCommissionEmployee &bp)
   {
      cout << "Enter first name: ";
      in >> bp.firstName;
      cout << "\nEnter last name: ";
      in >> bp.lastName;
      cout << "\nEnter social Security Number: ";
      in >> bp.socialSecurityNumber;
      cout << "\nEnter grossSales: ";
      in >> bp.grossSales;
      cout << "\nEnter commissionRate: ";
      in >> bp.commissionRate;
      cout << "\nEnter baseSalary: ";
      in >> bp.baseSalary;
      return in;
   }
   void print() const
   {
      cout << "First Name: " << firstName << "\t" << "Last Name: " << lastName
           << "\nSocial Security Number: " << socialSecurityNumber
           << "\nGross Sales: " << grossSales << "\t" << "Commission Rate: " << commissionRate
           << "\nBase Salary: $" << baseSalary<<endl;
   }
   double earnings() const override
   {
      return grossSales * commissionRate + baseSalary;
   }
};