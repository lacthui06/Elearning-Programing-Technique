#include <bits/stdc++.h>
using namespace std;
// 3.3 Xuất các số Fibonacci lẻ thuộc đoạn [m,n]
//cach ko de quy
void print(int m, int n)
{
   int fib0 = 0, fib1 = 1;
   while (fib1 <= n)
   {
      if (fib1 % 2 != 0 && fib1 >= m)
         cout << fib1 << " ";
      int fib = fib0 + fib1;
      fib0 = fib1;
      fib1 = fib;
   }
}
// cach de quy
void print_recur(int m, int n, int fib0 = 0, int fib1 = 1)
{
   if (fib1 > n)
      return;
   if (fib1 >= m && fib1 % 2 != 0)
      cout << fib1 << " ";
   print_recur(m, n, fib1, fib0 + fib1);
}
int main ()
{
   int m,n; cout<<"Nhap khoang cach doan [m, n]: ";
   do {
   cin >> m>>n;
   } while(m < 0 && n < 0 && m > n);
   cout<< "Day fibon le: ";
   print(m, n);cout<<endl;
   cout<<"Day fibon le (de quy): ";
   print_recur(m, n);
}