#include <bits/stdc++.h>
using namespace std;
// 3.2 Tính tổng các chữ số chia hết cho k của số nguyên dương N, k là tham số.
// cach ko de quy
int sum(int n, int k)
{
   int r, sum = 0;
   while (n != 0)
   {
      r = n % 10;
      if (r % k == 0)
         sum += r;
      n /= 10;
   }
   return sum;
}
// cach de quy
int sum_recur(int n, int k)
{
   if (n == 0) return 0;
   int r = n % 10;
   if (r % k == 0)
      return r + sum_recur(n / 10, k);
   return sum_recur(n / 10, k);
}
int main()
{
   int n, k;
   cout << "Nhap gia tri cua n va k (n > 0): ";
   do
   {
      cin >> n>> k;
   } while (n < 1 || k < 1);
   cout<<"Tong cac chu so chia het cho k cua N: "<<sum(n, k)<<endl;
   cout<<"Tong cac chu so chia het cho k cua N (de quy): "<<sum_recur(n, k);
}