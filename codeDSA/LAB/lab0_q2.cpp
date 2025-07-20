#include <bits/stdc++.h>
using namespace std;
class Point
{
private:
   float x, y;
public:
   Point (float x = 0, float y = 0) : x(x), y(y) {}
   float getX() const { return x; }
   float getY() const { return y; }
};
class Vector
{
   private:
      Point A, B, P, Q;
   public:
      Vector(Point A, Point B) : A(A), B(B) {}
      void setPQ(Point P, Point Q)
      {
         this ->P = P;
         this ->Q = Q;
      }
      // a. Viết hàm tính khoảng cách độ dài vector
      float getDist() const
      {
         return sqrt(pow(B.getX()-A.getX(), 2) + pow(B.getY()-A.getY(), 2));
      }
      // b. Viết hàm tính tích vô hướng giữa 2 vector
      float getDot() const
      {
         float dx = B.getX() - A.getX();
         float dy = B.getY() - A.getY();
         return dx * dx + dy * dy;
      }
      // c. Đường thẳng (D) có vectơ chỉ phương là AB.
      // Cho 2 điểm P(x1,y1) Q(x2,y2), viết hàm xác định vt tương đối của 2đ với đt
      // cùng phía(return 1), khác phía(return -1), nằm trên(return 0)
      int vtTuongDoi() const
      {
         //vecto phap tuyen : d(x, y) = n(y, -x)
         float nx = B.getY() - A.getY();
         float ny = -(B.getX() - A.getX());
         // s1 = n.AP
         float s1 = nx * (P.getX() - A.getX()) + ny * (P.getY() - A.getY());
         // s2 = n.AQ
         float s2 = nx * (Q.getX() - A.getX()) + ny * (Q.getY() - A.getY());
         if (s1 * s2 > 0)
            return 1;
         else if (s1 * s2 < 0)
            return -1;
         return 0;
      }
};
int main()
{
   Vector v(Point(2, 2), Point(6, 6));
   cout << "Do dai cua AB: "<<v.getDist() << "\n"
         <<"Tich vo huong cua AB: "<< v.getDot()<< endl;
   Point P(3, 0), Q(0, 3);
   v.setPQ(P, Q);
   int pos = v.vtTuongDoi();
   if (pos == 1)
      cout << "P va Q cung phia AB\n";
   else if (pos == -1)
      cout << "P va Q khac phia AB\n";
   else
      cout << "P va Q nam tren duong thang AB\n";
}