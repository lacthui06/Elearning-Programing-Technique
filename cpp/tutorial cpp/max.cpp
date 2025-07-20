#include <iostream>
using namespace std;
// dung thuat toan linh canh
int main(){
    int x,y,z,e;
    int max;
    cout << "Nhap vao 4 so nguyen : ";
    cin >> x>> y>> z>>e;
    max = x;
    if (y>max) 
        max=y;
    if (z>max)
        max=z;
    if (e >max)
        max=e;
    cout <<"GTLN "<<max;

    return 0;
}