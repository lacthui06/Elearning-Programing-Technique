#include <iostream>
using namespace std;


int main() {
    int n;
    float count = 0, sum = 0;

    while ( n != 9999){
        cout<< "Nhap n : ";
        cin >>n;
        if ( n == 9999) break;
        else {
            sum += n;
            count ++;
        }
    }
    cout << "Trung binh cong : "<<float( sum / count);
    return 0;
}