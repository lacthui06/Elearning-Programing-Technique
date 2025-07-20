#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Nhap 3 so a, b, c : ";
    cin>> a>>b>>c;
    if ((b<a&&a<c )||(c<a && a<b))
        cout<<"So o giua la : "<<a;
    else if ((a<b&& b<c)||(c<b&&b<a))
        cout<<"So o giua la : "<<b;
    else if ((a<c&&c<b)||(b<c&&c<a))
        cout<<"So o giua la : "<<c;
    else
        cout<<"Khong co so o giua 3 so !";
    return 0;
}