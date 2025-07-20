# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n integer positive : ";
    cin>>n;
    for (int i = 1; i<=n;i++){
    bool ngto=true;
    if (i<2) ngto=false;
    else{
        for (int j = 2; j<i;j++){
            if (i%j==0){
                ngto=false;
                break;
            }
        }
    }
    if (ngto==true) cout<<i<<"\n";
    }
    return 0;
}