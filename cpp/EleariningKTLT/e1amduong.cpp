# include <iostream>
using namespace std;
int main(){
    int n;
    do{
    cout<<"Nhap n phan tu ban muon kiem tra : ";
    cin>>n;
    }while(n<=0);
    int am=0,duong=0;
    for (int i=1 ; i<=n ; i++){
        cout<<"Nhap so "<<i<<" : ";
        int gtri;
        cin>>gtri;
        if (gtri<0) am+=1;
        if (gtri>0) duong+=1;
    }cout<<"Co "<<duong<<" so nguyen duong, "<<am <<" so nguyen am";
    return 0;
}