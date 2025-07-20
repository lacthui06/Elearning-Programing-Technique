#include <iostream>
using namespace std;
int main(){
    int days,month,year;
    bool nhuan;
    nhuan = (year % 400 ==0) || (year % 4==0 && year % 100 != 0);
    cout<< "Enter year : ";
    cin>> year;
    cout <<"Enter month : ";
    cin >> month;
    switch (month){
        case 1 : case 3 : case 5: case 7:case 8:case 10:case 12:
            days=31;
            break;
        case 4: case 6: case 9 :case 11:
            days=30;
            break;
        case 2:
            if (nhuan)
                days = 29;
            else 
                days = 28;
            break;
    }
    cout<<"Thang "<< month<< " trong "<< year<< " co "<<days;
    return 0;
}