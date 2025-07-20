#include <iostream>
using namespace std;
//Bài 2. Dùng con trỏ q để nhập/xuất dữ liệu cho dãy số nguyên gồm n phần tử.
void capphat(int * &q, int n){
    q = new int [n];
}
void nhap(int * &q, int n ){
    for (int i = 0; i < n; i++){
        cout <<"Nhap phan tu thu "<< i + 1 << " : " ; 
        cin>> *(q + i);
    }
}
void xuat(int *q, int n){
    for (int i = 0; i < n; i++)
        cout << *(q + i) << " " ;
}
// Sắp xếp dãy số tăng dần.
void hoanvi(int * n1, int * n2){
    int tempt = *n1;
    *n1 = *n2;
    *n2 = tempt;
}
void sapxep (int *q, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (*(q + i) > *(q + j))
                hoanvi((q + i), (q + j));
        }
    }
}
// Loại bỏ các phần tử là số lẻ khỏi dãy số.
void xoa(int *&q, int &n){
    for (int i = 0; i < n; i++){
        if (*(q + i) % 2 != 0){
            for (int j = i; j < n - 1; j++){
                *(q + j) = *(q + j + 1);
            }
            n--;
            i--;
        }
    }
    int *p = new int [n];
    for (int i = 0; i < n; i++){
        *(p + i) = *(q + i);
    }
    delete []q;
    q = p;
}
int main() {
    int *q, n;
    cout<< "Nhap so luong phan tu n nguyen : "; cin >> n;
    capphat(q, n); nhap(q, n); sapxep(q, n); 
    cout << "Day so sau khi sap xep : "; xuat(q, n);
    cout<< endl;
    cout << "Day so sau khi xoa so nguyen to : ";
    xoa(q, n); xuat(q, n);
}