# include "date.h"
ostream & operator <<(ostream &out, const Date &d)
{
    out << d.getD()<< "/"<<d.getM()<<"/"<<d.getY()<<endl;
    return out;
}
int main ()
{
    Date d1(10, 6, 2025), d2(11,5,2024);
    if (d1 > d2)
        cout<< "d1 > d2\n";
    cout<< d1<< d2;
    Date d;
    cin >>d;
    cout<<d;
    Date d3 = d++;
    cout<<d<<d3;
}