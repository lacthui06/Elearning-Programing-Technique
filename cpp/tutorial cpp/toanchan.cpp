#include <iostream>
using namespace std;

int main(){
    int n;
    bool chan = true;
    do{
        cout<<"nhap so ban muon kiem tra ";
        cin >>n; 
    }while (n<0);
    int m=n;//giu gia tri ban dau cho n neu khong thi n chuyen thanh 0 sau vong lap
    
    while(n>0){
        int du;
        du= n%10;
        if (du%2==1){
            chan=false;
            break;
        }
        n/=10;
    }
    if (chan==true) cout<< m<<" toan chu so chan";
    else cout<< m<<" co chu so khong phai chan";
    return 0;
}