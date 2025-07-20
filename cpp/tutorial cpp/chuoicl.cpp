# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n : ";
    cin >>n;
    if (n<=0){
        if (n%2 == 0){
            cout<<n <<" la so chan am\n";
            cout<<"Chuoi so chan la :\n";
            for (int i = n; i<=0; i+=2)
                cout<<i <<'\n';
        }
        if (n%2 == 1){
            cout<<n <<" la so le am\n";
            cout<<"Chuoi so le la :\n";
            for (int i = n; i<0; i+=2)
                cout<<i <<'\n';
        }
    }
    else if (n>=0){
        if (n%2==0){
            cout<<n <<" la so chan duong\n";
            cout<<"Chuoi so chan la :\n";
            for (int i = 0; i<=n; i+=2)
                cout<< i <<'\n';
        }
        if (n%2==1){
            cout<<n <<" la so le duong\n";
            cout<<"Chuoi so le la :\n";
            for (int i = 1; i<=n; i+=2)
                cout<< i <<'\n';
        }
    }
}