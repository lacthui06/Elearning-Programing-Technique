#include <iostream>
using namespace std;
void chu(int so){
    if (so == 0) cout << "khong";
    else if (so == 1) cout << "mot";
    else if (so == 2) cout << "hai";
    else if (so == 3) cout << "ba";
    else if (so == 4) cout << "bon";
    else if (so == 5) cout << "nam";
    else if (so == 6) cout << "sau";
    else if (so == 7) cout << "bay";
    else if (so == 8) cout << "tam";
    else if (so == 9) cout << "chin";
}
int main (){
    int n, tram, chuc, dv;
    do{
        cout<<"Nhap n nguyen duong : ";
        cin>> n;
        }while (n<=0);
    tram = n / 100;
    chuc = ( n / 10) %10;
    dv = n % 10;

    cout<<"Thanh chu : "; chu(tram); cout<< " tram ";
    if (chuc == 0) cout<< "le ";
    else {
        chu(chuc);
        cout<< " muoi ";
    }
    if (dv ==5 && chuc != 0 ) cout<< "lam";
    else if (dv == 5 && chuc == 0 ) cout<< "nam";
    else chu(dv);
    cout << '\n';
}