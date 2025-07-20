#include <iostream>
using namespace std;
# include <cmath>

// a. S = 1/2 + 1/4 + … + 1/2n 
float tong_a(int n){
    float s = 0;
    for (int i =1; i<= n;i++)
        s += 1.0/(2*i);
    return s;
}

// S = x+ x^3+ x^5+...+ x^(2n+1)
float tong_h(float x, int n){
    float s=0;
    for (int i =1; i<=n; i++)
    s += pow(x, 2*i+1);
    return s;
}

// nhap n co phai so nguyen to khong? Liet ke cac so nguyen to trong pham vi n
bool nto(int n){
    if (n<2)
        return false;
    for (int i=2 ; i<n ; i++)
        if (n%i==0)
        return false;
        return true;
}
void lke_nto(int n){
    for (int i =1 ; i <= n ; i++)
    if (nto(i)==true)
        cout<<i;
}

// chia de tri trong ham tim gtnn
int min2s(int a,int b){
    return a < b ? a : b;
}
int min3s(int a,int b, int c){
    return min2s(a,min2s(b,c));
}
int min4s(int a,int b, int c, int d){
    return min2s(a, min3s(b, c, d));
}

int main() {
    //int n;
    //float x;
    //do{
    int a,b,c,d;
    cout << "Nhap a,b,c,d : ";
    cin >>a,b,c,d;
    //cout<<"Nhap x : ";
    //cin >>x;
    //}while (n<=0);
    
    cout<<min4s(a,b,c,d);
}
