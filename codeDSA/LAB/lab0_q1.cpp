#include <bits/stdc++.h>
using namespace std;
bool existed(int diff[], int dem, int m)
{
   for (int i = 0; i < dem; i++)
   {
      if (diff[i] == m)
         return true;
   }
   return false;
}
void count_diff(int a[], int n)
{
   int dem = 0;
   int diff[n];
   for (int i = 0; i < n; i++)
   {
      if (!(existed(diff, dem, a[i])))
      {
         diff[dem] = a[i];
         dem++;
      }
   }
   cout<<"Co "<<dem<<" phan tu khac nhau\t";
   for (int i = 0; i < dem; i++)
   {
      cout<< diff[i]<<" ";
   }
}
int main()
{
   int a[] = {1, 6, 2, 3, 2, 4, 2, 6, 5};
   int n = sizeof(a) / sizeof(a[0]);
   count_diff(a, n);
}