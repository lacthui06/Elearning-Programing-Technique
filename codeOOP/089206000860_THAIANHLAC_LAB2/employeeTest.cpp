#include <iostream>
#include "employee.h"
using namespace std;
int main()
{
    Date birth( 24, 7, 1949 );
    Date hire( 12, 3, 1988 );
    Employee manager( "Bob", "Blue", birth, hire );
    cout << endl;
    manager.print();
    cout << "\nTest Date constructor with invalid values:\n";
    Date lastDayOff( 35, 14, 1994 ); // invalid month and day
    cout << endl;
    return 0;
}