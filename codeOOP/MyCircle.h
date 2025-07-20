#pragma once
#include "MyPoint.h"
class MyCircle : public MyPoint//ke thua
{
    private:
        float radius;
    public:
        MyCircle(float _x = 0, float _y = 0, float r = 1)
            :MyPoint (_x,_y)
        {
            if (r > 0) radius = r;
            else 
            {
                cout<<"invalid\n";
                radius = 1;
            }
        }
        ~MyCircle (){}
        float getR(){return radius;}
        friend ostream & operator <<(ostream &out, const MyCircle &c)
        {
            out<< "Center : ("<< c.x<<","<<c.y<<")"<<endl;
            out<<"Radius : "<<c.radius<<endl;
            return out;
        }
};