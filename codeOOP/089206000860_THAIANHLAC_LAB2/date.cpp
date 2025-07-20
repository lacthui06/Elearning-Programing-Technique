#include "date.h"
int Date:: endDayOfMonth() const
{
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap && month == 2)
        return 29;
    return daysInMonth[month];
}
bool Date :: valid() const
{
    int end = endDayOfMonth();
    return day <= end && day > 0;
}
Date :: Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
    if (!valid())
    {
        cout<<"invalid\n";
        day = 1;
        month = 1;
        year = 1990;
    }
}
Date :: ~Date()
{
    
}
void Date :: print() const
{
    cout<< day<<"/"<<month<<"/"<<year;
}
int Date :: getD() const
{
    return day;
}
int Date :: getM() const
{
    return month;
}
int Date :: getY() const
{
    return year;
}
bool Date :: operator > (const Date &d) const
{
    // (10/6/2025) > (11/5/2024)
    if (year > d.year)// this->year == year
        return true;
    else if (year == d.year)
    {
        if (month > d.month)
            return true;
        else if (month == d.month)
        {
            if (day > d.day)
                return true;
            else return false;
        }
    }
    return false;
}
bool operator==(const Date &d1, const Date &d2)
{
    return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}
bool operator<(const Date &d1, const Date &d2)
{
    return !(d1 > d2 || d1 == d2);
}
ostream &operator<<(ostream &out, const Date &d)
{
    out << d.getD() << "/" << d.getM() << "/" << d.getY() << endl;
    return out;
}
istream &operator>>(istream &in, Date &d)
{
    cout << "Nhap ngay ";
    in >> d.day >> d.month >> d.year;
    return in;
}
Date &Date ::operator++() // tien to
{
    if (day == endDayOfMonth()) // viet them ham nay
    {
        day = 1;
        if (month == 12)
        {
            month = 1;
            year++;
        }
        else
            month++;
    }
    else
        day++;
    return *(this);
}
const Date Date ::operator++(int)
{
    Date backup(*this); // goi ham copy construct
    ++(*this);          // goi toan tu ++ dang tien to
    return backup;
}