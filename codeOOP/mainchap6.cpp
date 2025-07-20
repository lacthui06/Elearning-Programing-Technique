#include <iostream>
using namespace std;
// ham khuon mau de Nhap du lieu cho mang gom cac phan tu thuoc kieu bat ki
template <typename T>
void input(T* arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout<<"Nhap phan tu "<< i + 1<<": ";
      cin>>arr[i];
   }
}
// ham khuon mau de Xuat du lieu cho mang gom cac phan tu thuoc kieu bat ki
template <typename T>
void print(T* arr, int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << "Phan tu " << i + 1 << "= "<< arr[i]<<endl;
   }
}
//ham khuon mau de Tim kiem x co ton tai trong mang gom cac phan tu thuoc kieu bat ky
template <typename T>
bool search(T *arr, int n, T x)
{
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == x) return true;
   }
   return false;
}
int main()
{
   int n;
   cout<<"Nhap so phan tu n : "; cin>> n;
   int *a = new int [n];
   input(a, n); cout<<endl;
   print(a, n);
   int *b = new int [n];
   input(b, n); cout << endl;
   print(b, n);
   int x;
   cout<<"Nhap phan tu can tim : "; cin>>x;
   bool found = search (a, n, x);
   if (found) cout<<"Phan tu "<<x<<" co trong mang";
   else cout<<"khong co tim con cac";
   return 0;
}