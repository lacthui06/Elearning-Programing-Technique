/* Bài 1. Viết hàm tìm số nguyên tố cận trên gần nhất với một số nguyên dương n bất kỳ  
 (Ví dụ: Với n=8 thì số nguyên tố cận trên gần nhất là số 11) */
#include <iostream>
using namespace std;

bool nt(int so){
    if (so < 2) return false;
    if (so >= 2) {
        for (int i = 2; i < so; i++){
        if ( so % i == 0) return false;
        }
    }
    return true;
}

int cantrennt(int n){
    int N = n + 1;
    while ( true ) {
        if (nt( N )) 
            return N ;
        else N ++ ;
    }
}

int main(){
    int n;
    do {
    cout<< "Nhap n nguyen duong : ";
    cin >> n;
    if (n <= 0) cout << "n nguyen duong : ";
    } while (n <= 0);
    cout << "So nguyen to can tren cua "<< n << " : "<< cantrennt(n);
}