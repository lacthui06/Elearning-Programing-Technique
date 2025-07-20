# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int a,b;
    char tinh;
    cout<<"Nhap so a, b : ";cin>>a>>b;
    cout<<"Chon phep cong nhap : +\n"<<"Chon phep tru nhap : -\n"
    <<"Chon phep nhan nhap : *\n"<<"Chon phep chia nhap : /\n"
    <<"Chon phep chia lay du nhap : %\n"
    <<"Chon phep luy thua nhap : ^\n"<<"Ban chon : ";
    cin>>tinh;
    if (tinh=='+') cout<<a <<" + "<<b <<" = "<<a+b;
    if (tinh=='-') cout<<a <<" - "<<b <<" = "<<a-b;
    if (tinh=='*') cout<<a <<" * "<<b <<" = "<<a*b;
    if (tinh=='/') cout<<a <<" / "<<b <<" = "<<a/b;
    if (tinh=='%') cout<<a <<" % "<<b <<" = "<<a%b;
    if (tinh=='^') cout<<a<<" ^ "<<b <<" = "<< pow(a,b);
    return 0;
}