#pragma ocne
#include <iostream>
using namespace std;
template <typename T>
class myList
{
   private:
      int maxsize;
      int count;
      T* data;
      void copy(T *des, T *source);
   public:
      myList(int size);
      bool isEmpty();
      bool isfull();
      void insert(T newElem); //chen phan tu vao cuoi mang
      void remove(T Elem);
      template <typename U>
      friend ostream &operator <<(ostream &out, const myList<U> &ds);
};