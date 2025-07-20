#include "Student.h"

int main()
{
   //a. nhap du lieu cho dssv
   int n;
   cout<<"Nhap so luong sinh vien: "; cin>>n;
   vector<Student> list;
   for (int i = 0; i < n; i++)
   {
      Student s;
      cout<<"Nhap thong tin sinh vien thu "<< i+1 <<"\n";
      cin>> s;
      list.push_back(s);
   }

   //b. xuat du lieu cho dssv
   cout << "\nDanh sach sinh vien:\n";
   for (int i = 0; i < n; i++)
      cout << list[i] << endl;

   //c. Sap xep tang dan/ giam dan dssv
   sort(list.begin(), list.end());
   cout << "\nDanh sach sinh vien tang dan:\n";
   for (int i = 0; i < n; i++)
      cout << list[i] << endl;

   sort(list.begin(), list.end(), greater<Student>());
   cout << "\nDanh sach sinh vien giam dan:\n";
   for (int i = 0; i < n; i++)
      cout << list[i] << endl;
   
   //d. Nhap vao lop bat ki. In dssv lop do
   string lop;
   cout<<"Nhap vao lop can tim: "; cin>>lop;
   for (int i = 0; i < n; i++)
   {
      if (lop == list[i].getGroup()) cout<<list[i]<<endl;
   }

   //nhap id tim sinh vien co id do
   string idFind;
   cout<<"Nhap vao ID sinh vien can tim: "; cin>> idFind;
   /*
   for (int i = 0; i < n; i++)
   {
      if (idFind == list[i].getID())
      {
         cout << list[i]<<endl;
         break;
      }
   }*/

   Student s1(idFind);
   vector <Student> :: iterator it;// iterator forward
   /*vector<Student>::reverse_iterator rit;
   for (rit = list.rbegin(); rit != list.rend(); ++rit)*/ // iterator backward
   it = find(list.begin(), list.end(), s1);
   if (it == list.end()) cout<<"Not found";
   else cout<<*it;
   return 0;
}