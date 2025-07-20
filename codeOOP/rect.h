//giao tiep interface
# pragma once
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len, wid;
    public:
        Rectangle ();
        Rectangle (int l, int w);
        void display ();
        void setLength( int newLen ); 
        void setWidth( int newWid ); 
        double perimeter();
        double diagonal();
        double area();
        bool isSquare();
        void draw(char c);
};