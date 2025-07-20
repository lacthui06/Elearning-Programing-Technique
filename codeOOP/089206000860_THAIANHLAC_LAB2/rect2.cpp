//cai dat implementation
#include "rect2.h"
#include <cmath>
int Rectangle :: thisMany = 0;
Rectangle :: Rectangle()
{
    this->len = 10;
    this->wid = 10;
    this->fillString = "";
    thisMany ++;
}
Rectangle :: Rectangle (int l, int w, string f)
{
    if (l > 0 && l <= 20)
        this->len = l;
    else this->len = -1 ;
    if (w > 0 && w <= 20)
        this->wid = w;
    else this->wid = -1;
    this->fillString = f; 
    thisMany ++;
}
void Rectangle :: display () const
{
    if (this->len == -1 && this->wid == -1)
        cout << "invalid length and width\n";
    else if (this->len == -1)
        cout<<"invalid length\n";
    else if (this->wid == -1)
        cout<<"invalid width\n";
    else cout << "[" << this->len << " x " << this->wid << "]";
}
void Rectangle :: setLength( int newLen )
{
    if (newLen > 0 && newLen <= 20)
        this->len = newLen;
} 
void Rectangle :: setWidth( int newWid )
{
    if (newWid > 0 && newWid <= 20)
        this->wid = newWid;
}
int Rectangle :: getLength( int newLen ) const
{
    return newLen;
}
int Rectangle :: getWidth( int newWid ) const
{
    return newWid;
}
string Rectangle :: fill() const
{
    return this->fillString;
}
Rectangle :: ~Rectangle()
{
    thisMany--;
}
double Rectangle :: perimeter() const
{
    if (this->len > 0 && this->wid > 0)
        return 2*(this->len + this->wid);
    return -1;
}
double Rectangle :: diagonal() const
{
    if (this->len > 0 && this->wid > 0)
        return sqrt(this->len*this->len + this->wid*this->wid);
    return -1;
}
double Rectangle :: area() const
{
    if (this->len > 0 && this->wid > 0)
        return this->len*this->wid;
    return -1;
}
bool Rectangle :: isSquare() const
{
    return this->len == this->wid;
}
void  Rectangle :: draw(char c) const
{
    for (int i = 0; i < this->wid; i++)
    {
        for (int j = 0; j < this->len; j++)
            cout<< c;
        cout << endl;
    }
}
int Rectangle :: howMany()
{
    return thisMany;
}