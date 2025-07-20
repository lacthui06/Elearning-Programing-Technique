# include <iostream>
using namespace std;
int main(){
    char c1 ='K', c2 ='B', c3 = 'O';
    char n1,n2;
    cout<<"Moi nguoi 1 nhap B = Bua , O = Bao hoac K = Keo\n";
    cin>>n1;
    cout<<"Moi nguoi 2 nhap B = Bua , O = Bao hoac K = Keo\n";
    cin>>n2;
    if (n1=='K' && n2=='O' || n1=='B' && n2=='K' || n1=='O' && n2=='B' )
    cout<<"Nguoi choi 1 thang";
    else if (n1==n2) cout<<"2 nguoi hoa";
    else cout<<"Nguoi choi 2 thang";
}