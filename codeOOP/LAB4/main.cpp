#include "employee.h"   // Employee base class
#include "salaried.h"   // SalariedEmployee class
#include "commission.h" // CommissionEmployee class
#include "baseplus.h"   // BasePlusCommissionEmployee class
#include "hourly.h"     // HourlyEmployee class
#include <iomanip>

int main()
{
   cout << fixed << setprecision(2);

   Employee *employees;

   int test;
   cin >> test;

   switch (test)
   {
   case 1:
   {
      employees = new SalariedEmployee("John", "Smith", "123-45-1111", 750.00);
      employees->print();
      cout << "earned $" << employees->earnings() << endl;
      break;
   }
   case 2:
   {
      employees = new HourlyEmployee("Karen", "Price", "123-81-4444", 16.75, 40);
      employees->print();
      cout << "earned $" << employees->earnings() << endl;
      break;
   }
   case 3:
   {
      employees = new CommissionEmployee("Sue", "Jones", "215-49-3333", 10000, 0.06);
      employees->print();
      cout << "earned $" << employees->earnings() << endl;
      break;
   }
   case 4:
   {
      employees = new BasePlusCommissionEmployee("Bob", "Lewis", "333-33-3333",
                                                 5000, 0.04, 300);
      employees->print();
      cout << "earned $" << employees->earnings() << endl;
      break;
   }
   case 5:
   {
      SalariedEmployee sal;
      cin >> sal;
      sal.print();
      sal.setWeeklySalary(500);
      cout << sal.getWeeklySalary() << endl;
      break;
   }
   case 6:
   {
      HourlyEmployee h;
      cin >> h;
      h.print();
      h.setHours(30);
      cout << h.getHours() << endl;
      break;
   }
   case 7:
   {
      CommissionEmployee c;
      cin >> c;
      c.print();
      c.setCommissionRate(0.05);
      cout << c.getCommissionRate() << endl;
      break;
   }
   case 8:
   {
      BasePlusCommissionEmployee b;
      cin >> b;
      b.print();
      b.setBaseSalary(350);
      cout << b.getBaseSalary() << endl;
      break;
   }
   }
   return 0;
}