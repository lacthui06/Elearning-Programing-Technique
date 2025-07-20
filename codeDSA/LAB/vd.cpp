#include <bits/stdc++.h>
using namespace std;
int sum (int n, int k)
{
   if(n == 0 || k == 0) return 0;
   if(n % 10 % k == 0)  return n % 10 + sum(n/10, k);
   return sum(n / 10, k);
}
int main()
{
   int n, k;
   cout<<"Nhap gia tri cua N, k: "; 
   do {
      cin>>n >> k;
   } while (n < 0 || k < 0);
   cout<<"S(n) = "<<sum(n, k);
}