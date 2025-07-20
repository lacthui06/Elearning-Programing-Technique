#include <iostream>
using namespace std;

int main(){
    int count= 0;
    int sum = 0;
    int num;
    cout <<"Nhap 10 so nguyen duong\n";
    while (count <10){
        do {cout << "Num "<< count+1<<" : ";
            cin >> num ;
            if (num <= 0 )
                cout <<"PLEASE ENTER POSITIVE\n";  
        }while (num <=0);
        if (num % 2==0)
            sum+=num;
        count ++;
    }
    cout <<"SUM OF EVEN : "<<sum;
    return 0;
}