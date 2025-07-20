#pragma once
#include <iostream>
using namespace std;
class MyPoint
{
    protected:
        float x,y;
    public:
        MyPoint(float _x = 0, float _y = 0)
            : x(_x), y(_y)
        {
        }
        ~MyPoint(){}
        float getX() const {return x;}
        float getY() const {return y;}
        friend ostream & operator <<(ostream &out, const MyPoint & p)
        {
            out<<"(" << p.x <<","<<p.y <<")"<<endl;
            return out;
        }
};