# include <iostream>
using namespace std;
int main(){
    int n, fib0=0, fib1=1, c;
    do{
        cout<<"Nhap n : ";
        cin >>n;
    }while (n<0);
    if (n==0) return fib0 ;
    else if (n==1) return fib1;
    else {
        for ( int i = 2; i<=n ; i++){
            c = fib0 + fib1;
            fib0 = fib1;
            fib1 =c;
        }
        cout<< fib1 ;
    }
}