/* Bài 4.Viết hàm đệ quy tính giá trị của biểu thức: 
 S = 1*2 + 2*3 + 3*4 + ...+ (n-1)*n */
#include <cmath>
#include <iostream>
using namespace std;
int tich(int n){
    if (n==2) return 2;
    return tich(n-1) +  (n - 1) * n;
}

int main(){
    int n;
    cout<< "Nhap n duong : ";
    do {
    cin >> n;
    if ( n < 2) cout<< "Nhap n nguyen duong (n >= 2) ! : ";
    } while ( n < 2);
    cout<<"Tich cua tong la : "<<  tich(n);
}