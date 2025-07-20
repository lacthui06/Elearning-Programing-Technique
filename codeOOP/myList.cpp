#include "myList.h"
template <typename T>
myList <T> :: myList (int size)
{
   if (size <= 0)
      maxsize = -1;
   else
      maxsize = size;
   count = 0;
   data = new T[maxsize];
}

template <typename T>
bool myList<T>:: isEmpty()
{
   return count == 0;
}

template <typename T>
bool myList<T>:: isfull()
{
   return count == maxsize;
}

template <typename T>
void myList<T>:: insert(T newElem)
{
   if (isfull())
   {
      //cout<<"Mang da day"<<endl;
      T * backup = new T[maxsize];
      copy(backup, data);//sao luu du lieu
      delete[] data;
      maxsize *= 2;
      data = new T[maxsize];//cap phat vung nho moi
   }
   data[cout] = newElem;
   count ++;
}

template <typename U>
ostream &operator<<(ostream &out, const myList<U> &ds)
{
   for (int i = 0; i < ds.count; i++)
   {
      out << ds.data[i] <<" ";
   }
   return out;
}

template<typename T>
void myList<T> ::copy(T *des, T *source)
{
   for (int i = 0; i < count; i++)
   {
      des[i] = source[i];
   }
}

template<typename T>
void myList <T> :: remove(T Elem)
{
   int vt = -1;
   for (int i = 0; i < count; i++)
   {
      if (data[i] == Elem)
      {
         vt = i;
         break;
      }
   }
   if (vt != -1)
   {
      for (int i = vt; i < count -1; i++)
      {
         data[i] = data[i + 1];
      }
      count --;
   }
   else cout<<"This element is not in the list\n";
}