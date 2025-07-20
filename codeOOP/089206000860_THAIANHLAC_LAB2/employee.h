#pragma once
#include "date.h"
#include<string>
class Employee
{
    private:
        string lastname, firstname;
        Date birthdate;
        Date hiredate;
    public:
        Employee (string ln, string fn, Date birth, Date hire);
        ~Employee();
        void print() const;
};