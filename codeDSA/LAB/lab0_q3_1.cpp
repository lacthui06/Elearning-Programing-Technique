#include <bits/stdc++.h>
using namespace std;
// 3.1 Tính Sn=1!/sqrt(2)+ 2!sqrt(3)+…+n!/sqrt(n+1)
//cach ko de quy
int factorial (int n)
{
   int fac = 1;
   if (n < 2) return 1;
   for (int i = 2; i <= n; i++)
      fac *= i;
   return fac;
}
float Sn(int n)
{
   float sum = 0;
   for (int i = 1; i <= n; i++)
      sum += factorial(i) / sqrt(i + 1);
   return sum;
}
// cach de quy
int factorial_recur(int n)
{
   if(n == 1) return 1;
   return n * factorial_recur(n - 1);
}
float Sn_recur(int n)
{
   if (n == 1)
      return factorial_recur(n) / sqrt(n + 1);
   return factorial_recur(n) / sqrt(n + 1) + Sn_recur(n - 1);
}
int main ()
{
   int n; cout<<"Nhap gia tri cua n (n > 0): "; 
   do {
      cin >>n;
   } while (n < 1);
   cout<<"S(n): "<<Sn(n)<<endl;
   cout<<"S(n) de quy: "<<Sn_recur(n);
}