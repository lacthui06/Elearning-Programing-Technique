#include <bits/stdc++.h>
using namespace std;
int main()
{
   int A[] = {6, 13, 34, 19};

   int *p = A;// tro toi a[1]
   cout<< *p<<endl;

   *p++;// con tro tro toi a[2]
   cout<< *p<<endl;

   *p += 2;// gia tri tai noi con tro tro toi + 2
   cout << *p << endl;

   p += 2;// dia chi con tro a[3] + 2
   cout << p << endl;

   *p += 2;// gia tri tai tro a[4] + 2
   cout << *p << endl;
}