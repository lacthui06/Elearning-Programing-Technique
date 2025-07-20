# include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Nhap a, b, c, d : ";
    cin>> a>>b >> c>>d ;
    int max = a ;
    if (b>max) max=b;
    if ( c>max) max=c;
    if ( d>max) max=d;
    int min = a;
    if (b<min) min=b;
    if (c<min) min=c;
    if ( d<min) min=d;

    cout<<"Cap so co hieu lon nhat : "<<max<<" - "<<min;
    return 0;
}