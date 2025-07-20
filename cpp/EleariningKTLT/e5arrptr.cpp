#include <iostream>
using namespace std;
/*Bài 1. Cấp phát cho con trỏ p một lượng chứa n phần tử số nguyên.
Hãy xuất n phần tử đó ra màn hình và tìm khoảng cách vị trí của 2 phần tử
xa nhau nhất sao cho khoảng cách giá trị giữa chúng là lớn nhất.*/
void capphat(int * &p, int n){
    p = new int [n];
}
void nhap(int * &p, int n ){
    for (int i = 0; i < n; i++){
        cout <<"Nhap phan tu thu "<< i + 1 << " : " ; 
        cin>> *(p + i);
    }
}
void xuat(int *p, int n){
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " " ;
}
void tim(int * &p, int n){
    int gtln = *p, gtnn = *p;
    for (int i = 0; i < n; i++){
        if (*(p + i) > gtln ) gtln = *(p + i);
        if (*(p + i) < gtnn ) gtnn = *(p + i);
    }
    int *vttrungln = new int [n] , *vttrungnn = new int [n] , demgtln = 0, demgtnn = 0;
    for (int i = 0; i < n; i++){
        if (*(p + i) == gtln ){
            *(vttrungln + demgtln) = i;
            demgtln ++;
        }
        if (*(p + i) == gtnn) {
            *(vttrungnn + demgtnn) = i;
            demgtnn++;
        }
    }
    int vtln = 0, vtnn = 0, kcln = 0, d;
    for (int i = 0; i < demgtln; i++){
        for (int j = 0; j < demgtnn; j++){
            d = abs (*(vttrungln + i) - *(vttrungnn + j));
            if (d > kcln){
                kcln = d;
                vtln = *(p + *(vttrungln + i));
                vtnn = *(p + *(vttrungnn + j));// lay gtnn & gtln co kcln
            }
        }
    }
    cout << "Khoang cach tim duoc la "<< kcln << " giua 2 phan tu la " 
        << vtln<< " va "<< vtnn;
}
int main() {
    int *p, n;
    cout<< "Nhap so luong phan tu n nguyen : "; cin >> n;
    capphat(p, n); nhap(p, n); xuat(p, n);
    cout<< endl;
    tim(p, n);
}