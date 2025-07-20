#include <iostream>
using namespace std;
// Bài 1. Viết chương trình nhập/xuất dữ liệu cho dãy số nguyên A gồm n phần tử: 
void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<< "a["<< i <<"] = ";
        cin >> a[i];
    }
}
void xuat(int a[], int n){
    for (int i = 0; i < n; i++){
        cout<< a[i] << " ";
    }
}
//1.a)Kiểm tra xem dãy A có đang được sắp xếp theo thứ tự (tăng/giảm) hay không?
int taggiam(int a[], int n){
    bool tang= true, giam = true;
    for (int i = 0; i < n-1; i++){
        if (a[i] < a[i+1]) giam = false;
        if (a[i] > a[i+1]) tang = false;
    }
    if (tang) return 1;
    if (giam) return 0;
    return -1;
}
/* 1.b) Hãy sắp xếp nửa đầu của dãy A tăng dần, nửa sau giảm dần,
số ở giữa nếu có giữ nguyên.*/
void hoanvi(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}
void sapnuadau(int a[], int n){
    for (int i = 0; i < n / 2 - 1; i++){
        for (int j = i + 1; j < n / 2; j++){
            if (a[i] > a[j]) hoanvi(a[i], a[j]);
        }
    }
}
void sapnuacuoi(int a[], int n){
    for (int i = (n + 1) / 2; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] < a[j]) hoanvi(a[i], a[j]);
        }
    }
}
/* 1.c) Hãy tìm vị trí của cặp số có khoảng cách giá trị lớn nhất trong dãy A.
Ví dụ: Dãy A: 3, 9, 1, 9, 2, 7, 0, 5, 0. Thì khoảng cách giá trị lớn nhất
chính là phần tử có giá trị là 9 và 0 ở vị trí thứ 2 và thứ 9,
tức là các phần tử A[1] và A[10] */
void tim(int a[], int n){
    int gtln = a[0], gtnn = a[0];
    for (int i = 1; i < n; i++ ){
        if (a[i] > gtln) gtln = a[i];
        if (a[i] < gtnn) gtnn = a[i];
    }

    int vttln[n], vttnn[n]; // vttln : vị trí trùng lớn nhất
    int demln = 0, demnn = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == gtln) {
            vttln[demln] = i;
            demln += 1;
        }
        if (a[i] == gtnn) {
            vttnn[demnn] = i;
            demnn += 1;
        }
    }

    int kcln = 0, vtln = 0, vtnn = 0;
    for (int i = 0; i < demln; i++){
        for (int j = 0; j < demnn; j++){
            int d = abs(vttln[i] - vttnn[j]);
            if (d > kcln){
                kcln = d;
                vtln = vttln[i];
                vtnn = vttnn[j];
            }
        }
    }
    cout<< "Vi tri cua gia tri lon nhat : a[" << vtln << "]\n"
    << "Vi tri cua gia tri nho nhat : a[" << vtnn << "]\n";
}

int main(){
    int a[100], n;
    cout<< "Nhap n phan tu: "; cin>>n;
    nhap(a, n); 
    cout<< "Mang da nhap : "; xuat(a, n);
    cout << endl;
    int kq = taggiam(a, n);
    if (kq == 1) cout<<"Mang tang dan\n";
    else if (kq == 0) cout<<"Mang giam dan\n";
    else cout<<"Mang khac\n";
    //sapnuadau(a, n); sapnuacuoi(a, n);
    //cout<< "\nMang sau sap xep : "; xuat(a, n);
    tim(a, n);
}