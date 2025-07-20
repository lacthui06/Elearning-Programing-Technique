#include <iostream>
using namespace std;
void nhap(int a[][100], int d, int c){
    for (int i = 0; i < d; i++){
        for (int j = 0; j < c; j++){
            cout<< "a[" << i <<"]["<< j <<"] = ";
            cin >> a[i][j];
        }
    }
}
void xuat2c(int a[][100], int d, int c){
	for (int i = 0; i < d; i++){
		for (int j = 0; j < c; j++) cout << a[i][j] << " ";
		cout << "\n";
	}
}

int tongcot(int a[][100], int d, int cotcantinh){
    int tongc = 0;
    for (int i = 0; i < d; i++){
        tongc += a[i][cotcantinh];
    }
    return tongc;
}

int tongdong(int a[][100], int c, int dongcantinh){
    int tongd = 0;
    for (int i = 0; i < c; i++){
        tongd += a[dongcantinh][i];
    }
    return tongd;
}
int tongdc(int a[][100], int d, int c){
    int tongdc = 0;
    for (int i = 0; i < c ; i++)
        tongdc += a[0][i] + a[d-1][i];
    for (int j = 1; j < d-1 ; j++)
        tongdc += a[j][0] + a[j][c-1];
    return tongdc;
}
int main(){
    int a[100][100], d, c, cotcantinh, dongcantinh;
    cout<< "Nhap so dong : "; cin >> d;
    cout<< "Nhap so cot : "; cin >> c;
    nhap(a, d, c);
    xuat2c(a, d, c);
    cout<<"Nhap cot can tinh : "; cin>> cotcantinh;
    cout<< "Tong gia tri cac cot : "<<tongcot(a, d, cotcantinh) << "\n";
    cout<<"Nhap dong can tinh : "; cin>> dongcantinh;
    cout<< "Tong gia tri cac dong : "<<tongdong(a, d, dongcantinh) << "\n";
    cout<< "Tong gia tri cac dong, cot : "<<tongdc(a, d, c) << "\n";
}