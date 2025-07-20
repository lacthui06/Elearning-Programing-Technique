/* Bài 3.Viết hàm in ra hình dạng như mẫu sau với kích thước
 là 2n+1 trong đó n là tham số chính của hàm. */
#include <iostream>
using namespace std;
void ve(int n){
    int kt = 2*n + 1;
    for (int i = 1; i <= kt; i++ ) {
        for (int j = 1; j <= kt; j++ ) {
            if (i == kt / 2 + kt % 2 || j == kt / 2 + kt % 2){
                cout<< "+ ";
            }else cout << "  ";
        }
        cout<< '\n';
    }
}
int main(){
    int n;
    cout<< "Nhap tham so n : ";
    do {
    cin >>n;
    if ( n <= 0) cout<< "Khong hop le nhap lai : ";
    } while ( n <= 0);
    ve(n);
}