# include <iostream>
using namespace std;
int main(){
    int n=9;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            if(i==1 || i==9 ||j==1 ||j==9 ||j==i||j==n-i+1) cout<<"*  ";
            else cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}