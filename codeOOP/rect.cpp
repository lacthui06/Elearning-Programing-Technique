//cai dat implementation
#include "rect.h"
#include <cmath>
Rectangle :: Rectangle()
{
    len = 10;
    wid = 10;
}
Rectangle :: Rectangle (int l, int w)
{
    if (l > 0 && l <= 20)
        len = l;
    else len = -1 ;
    if (w > 0 && w <= 20)
        wid = w;
    else wid = -1;
}
void Rectangle :: display ()
{
    if (len == -1 && wid == -1)
        cout << "invalid length and width\n";
    else if (len == -1)
        cout<<"invalid length\n";
    else if (wid == -1)
        cout<<"invalid width\n";
    else cout << "[" << len << " x " << wid << "]";
}
void Rectangle :: setLength( int newLen )
{
    if (newLen > 0 && newLen <= 20)
        len = newLen;
} 
void Rectangle :: setWidth( int newWid )
{
    if (newWid > 0 && newWid <= 20)
        wid = newWid;
}
double Rectangle :: perimeter()
{
    return 2*(len + wid);
}
double Rectangle :: diagonal()
{
    return sqrt(len*len + wid*wid);
}
double Rectangle :: area()
{
    return len*wid;
}
bool Rectangle :: isSquare()
{
    if (len == wid ) return true;
    return false;
}
void  Rectangle :: draw(char c)
{
    for (int i = 0; i < wid; i++)
    {
        for (int j = 0; j < len; j++)
            cout<< c;
        cout << endl;
    }
}