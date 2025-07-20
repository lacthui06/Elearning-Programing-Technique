#include <iostream>
using namespace std;
// Bài 3. Dùng mảng 2 chiều để nhập/xuất dữ liệu cho ma trận A vuông cấp n.
void nhap2a(int a[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "a[" << i << "][" << j <<"] = ";
            cin >> a[i][j];
        }
    }
}
void xuat2a(int a[][100], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << "\n\n";
    }
}
// 3.a) Hiển thị ra màn hình các phần tử nằm trên đường chéo chính của A.
void ptchinh(int a[][100], int n){
    for (int i = 0; i < n; i++) cout << a[i][i] << " ";
}
// 3.b) Tính tổng giá trị các phần tử ở 4 viền ngoài cùng của ma trận A.
void tongvien(int a[][100], int n){
    int tong = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1){
                tong += a[i][j];
            }
        }
    }
    cout << "\nTong gia tri 4 vien : " << tong;
}
// 3.c) Tính giá trị trung bình của các phần tử nằm bên phía dưới đường chéo phụ.
void tb(int a[][100], int n){
    float dem = 0.0, tong = 0.0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j > n - i - 1){
                tong += a[i][j];
                dem ++;
            }
        }
    }
    cout << "\nTrung binh duoi duong cheo phu: " << tong / dem;
}
int main(){
    int a[100][100], n;
    cout<< "Nhap n : "; cin >> n;
    nhap2a(a, n); 
    cout<< "Ma tran vua nhap :\n"; xuat2a(a, n);
    cout <<"Phan tu nam tren duong cheo chinh : "; ptchinh(a, n);
    tongvien(a, n); tb(a, n);
}