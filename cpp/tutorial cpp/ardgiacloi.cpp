#include <iostream>
using namespace std;
void nhap(float x[], float y[], int n){
    char diem = 'A';
    for (int i = 0; i < n; i++){
        cout << "Nhap toa do diem " << char(diem + i) << " : ";
        cin >> x[i] >> y[i];
    }
}
void xuat(float x[], float y[], int n){
    char diem = 'A';
    for (int i = 0; i < n; i++){
        cout << "Toa do diem " << char(diem + i) << " : ";
        cout << "(" << x[i] << ", " << y[i] << ")" << "\n";
    }
}
void kt(float x[], float y[], int n){
    int dau = 0;
    int i = 0; 
    bool duong = true;
    float z[10];
    while (i < n){
        int mid_num = (i + 1) % n, last_num = (i + 2) % n; 
        float z = (x[mid_num] - x[i]) * (y[last_num] - y[i]) 
                - (y[mid_num] - y[i]) * (x[last_num] - x[i]);
        if (z != 0){
            if (dau == 0) dau = (z > 0) ? 1 : -1;
            else if (z > 0 && dau == -1 || z < 0 && dau == 1) {
                cout << "Da giac lom\n"; return;
            }
        }
        i ++;
    }
    cout<< "Da giac loi\n";
}
int main(){
    int n; float x[10], y[10];
    do {
        cout<< "n = "; cin >>n;
    } while (n < 3 || n > 10);
    nhap(x, y, n); xuat(x, y, n); kt(x, y, n);
}
