#include "employee.h"
Employee :: Employee (string ln, string fn, Date birth, Date hire)
{
    lastname = ln;
    firstname = fn;
    birthdate = birth;
    hiredate = hire;
}
Employee :: ~Employee()
{
    
}
void Employee :: print() const
{
    cout<< lastname<<" "<<firstname<< endl;
    cout<<"Birth date : "; birthdate.print(); cout<<endl;
    cout<<"Hire date : "; hiredate.print(); cout<<endl;
}