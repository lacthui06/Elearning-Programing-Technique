/* Viết phương trình đường thẳng d qua 2 điểm A, B. 
Kiểm tra xác định vị trí tương đối của C và đường thẳng d */
# include <iostream>
using namespace std;
int main(){
    float xa, ya, xb, yb, xc, yc;
    cout<< "Nhap toa do A : "; cin>> xa>> ya;
    cout<< "Nhap toa do B : "; cin>> xb>> yb;
    cout<< "Nhap toa do C : "; cin>> xc>> yc;
    float A = yb - ya;
    float B = xa - xb;
    if (B < 0)
        cout << "Phuong trinh duong thang d: "<< A<< "x "<< B<< "y = 0\n";
    else cout << "Phuong trinh duong thang d: "<< A<< "x + "<< B<< "y = 0\n";
    float D = xc*A + yc*B + xb*ya - xa*yb;
    if (D == 0) cout<<"Diem C thuoc duong thang d";
    else if (D < 0) cout<<"Diem C nam khac phia (0,0) so voi duong thang d";
    else if (D > 0) cout<< "Diem C nam cung phia (0,0) so voi duong thang d";
}