#include <iostream>
using namespace std;

int main(){
    int n;
    do{cout <<"Enter a positive : ";
    cin >>n;
    if (n<=0)
        cout <<"ENTER A POSITIVE\n";
    }while (n<=0);

    cout<<"So dao nguoc : ";

    do{cout<<n%10;
    n/=10;
    }while (n >0);
    return 0;
}