#include <iostream>
using namespace std;
void np(int n){
    if (n > 0) np(n / 2);
    cout<< n % 2;
}
void bp(int n){
    if (n >= 8) bp(n / 8);
    cout<< n % 8;
}
void tlp(int n){
    if (n >= 16) tlp(n / 16);
    if (n % 16 < 10) cout<< n % 16;
    else cout<< (char)((n % 16) - 10 + 'A') ;
}
int main(){
    int n;
    cout<<"Nhap so nguyen duong : ";
    do {
        cin>> n;
        if (n <= 0) cout<<"So khong hop le, nhap lai: ";
    } while (n <= 0);
    cout<< "He thap phan la : "<< n;
    cout<< n<<" chuyen sang nhi phan la : "; np(n); cout<<"\n";
    cout<< n<<" chuyen sang bat phan la : "; bp(n); cout<<"\n";
    cout<< n<<" chuyen sang thap luc phan la : "; tlp(n);
}