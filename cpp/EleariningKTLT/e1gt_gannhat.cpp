# include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cout<<"Nhap n, a, b, c : ";
    int hieu_a,hieu_b,hieu_c;// hieu_a : hiệu a
    cin>> n>> a>>b >>c ;
    
    hieu_a=abs(a-n);
    hieu_b=abs(b-n);
    hieu_c=abs(c-n);
    
    if ((hieu_a<=hieu_b)&&(hieu_a<=hieu_c))
        cout<<"So gan nhat voi "<<n <<" : "<<a;
    else if ((hieu_b<=hieu_a)&&(hieu_b<=hieu_c))
        cout<<"So gan nhat voi "<<n <<" : "<<b;
    else cout<<"So gan nhat voi "<<n <<" : "<<c;
    
    return 0;
}