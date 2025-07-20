# include <iostream>
# include <cmath>
using namespace std;
float gtln(int a, int b, int c){
    float gtln = (a>b)? a :b;
    gtln = (c>gtln)? c : gtln;
    return gtln;
}
int main (){
    float a,b,c;
    do{
    cout<<"Nhap do dai canh a : ";
    cin>>a;
    if (a<=0) cout<<"Do dai khong hop le, moi nhap lai";
    }while(a<=0);
    do{
    cout<<"Nhap do dai canh b : ";
    cin>>b;
    if (b<=0) cout<<"Do dai khong hop le, moi nhap lai";
    }while(b<=0);
    do{
    cout<<"Nhap do dai canh c : ";
    cin>>c;
    if (c<=0) cout<<"Do dai khong hop le, moi nhap lai";
    }while(c<=0);
    if (a+b>c && a+c>b && b+c>a){
        if ( a==b && b==c) cout<<"Day la tam giac deu\n";
        else if ( a==b || a==c || b==c) {
        cout<<"Day la tam giac can\n";
        if (gtln(a,b,c) == a){
            if (a == sqrt(pow(b,2)+pow(c,2))) cout<<"Day la tam giac vuong can\n";
            else cout<<"Day la tam giac can\n";
        }
        else if (gtln(a,b,c) == b){
            if (b == sqrt(pow(a,2)+pow(c,2))) cout<<"Day la tam giac vuong can\n";
            else cout<<"Day la tam giac can\n";
        }
        else if (gtln(a,b,c) == c){
            if (c == sqrt(pow(b,2)+pow(a,2))) cout<<"Day la tam giac vuong can\n";
            else cout<<"Day la tam giac can\n";
        }
        }
        if (gtln(a,b,c) == a){
            if (a == sqrt(pow(b,2)+pow(c,2))) cout<<"Day la tam giac vuong\n";
            else cout<<"Day la tam giac thuong\n";
        }
        else if (gtln(a,b,c) == b){
            if (b == sqrt(pow(a,2)+pow(c,2))) cout<<"Day la tam giac vuong\n";
            else cout<<"Day la tam giac thuong\n";
        }
        else if (gtln(a,b,c) == c){
            if (c == sqrt(pow(a,2)+pow(b,2))) cout<<"Day la tam giac vuong\n" ;
            else cout<<"Day la tam giac thuong\n";
        }
    float cv = a+b+c;
    float p = cv / 2;
    float s = sqrt (p *(p - a) * ( p - b) * ( p - c));
    cout<<"Dien tich tam giac : "<<s <<'\n'<<"Chu vi tam giac : "<<cv;
    }
    else cout<<"3 do dai khong thoa la 1 tam giac";
}