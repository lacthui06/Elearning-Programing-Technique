#include "myList.h"
#include "myList.cpp"
int main()
{
   myList <int> ds1(3);
   ds1.insert(5);
   ds1.insert(2);
   ds1.insert(7);
   cout<<ds1<<endl;
   myList <float> ds2(5);// tu test- hoan thanh ds2
}