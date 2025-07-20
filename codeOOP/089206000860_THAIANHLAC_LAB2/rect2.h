//giao tiep interface
# pragma once
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len, wid;
        static int thisMany;
        string fillString;
    public:
        Rectangle ();
        Rectangle (int l, int w, string f = "");
        void display () const;
        void setLength( int newLen ); 
        void setWidth( int newWid ); 
        int getLength( int newLen ) const; 
        int getWidth( int newWid ) const; 
        double perimeter() const;
        double diagonal() const;
        double area() const;
        bool isSquare() const;
        void draw(char c) const;
        static int howMany();
        string fill() const;
        ~Rectangle();
};