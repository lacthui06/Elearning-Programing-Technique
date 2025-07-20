#include "person.h"

int main()
{
   int test;
   cin >> test;

   switch (test)
   {
   case 1:
   {
      Person p1;
      p1.show();
      break;
   }
   case 2:
   {
      Person p2("1234567890", "Nguyen Van A", 2001);
      p2.show();
      break;
   }
   case 3:
   {
      Person p3("5123456789", "Nguyen Van C", -2001);
      p3.show();
      break;
   }
   case 4:
   {
      Person p4;
      cin >> p4;
      p4.setName("Le Thi B");
      cout << p4.getName() << endl;
      break;
   }
   case 5:
   {
      Person p5;
      cin >> p5;
      p5.setYear(2002);
      cout << p5.getYear() << endl;
      break;
   }
   case 6:
   {
      Person p6;
      cin >> p6;
      p6.setYear(-2003);
      cout << p6.getYear() << endl;
      break;
   }
   case 7:
   {
      Person p7;
      cin >> p7;
      cout << "Ban thuoc the he: " << p7.gen() << endl;
      break;
   }
   case 8:
   {
      Person p8, p9;
      cin >> p8 >> p9;
      p8.show();
      p9.show();
      break;
   }
   }
}