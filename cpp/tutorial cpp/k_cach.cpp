# include <iostream>
#include <math.h>   // math lib
using namespace std;
    

int main (){ 
    int x,y,z;
    int a,b,c,d;
    float kh_cach;

    cout << "Nhap he so mat phang : ";
    cin >> a >> b>>c>>d;
    cout << "Nhap toa do M : ";
    cin >>x>>y>>z;
    
    kh_cach = abs ( a*x+b*y+c*z+d )/ sqrt( pow(a,2) + pow(b,2)+ pow(c,2) );
    cout << "Khoang cach tu diem M toi mat phang "<< kh_cach;
    return 0;
}