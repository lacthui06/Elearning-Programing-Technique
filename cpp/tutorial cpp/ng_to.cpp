#include <iostream>
using namespace std;

int main(){
    int n;
    bool ngto=true;
    cout<<"Enter n integer positive : ";
    cin>>n;
    if (n<2)
        ngto=false;
    else{
        for (int i = 2; i< n; i++){
            if (n%i==0){
                ngto=false;
            }
        }
    }
    if (ngto==true) cout<<n<<" la so nguyen to";
    else cout<<n <<" khog phai la so nguyen to";
    return 0;
}