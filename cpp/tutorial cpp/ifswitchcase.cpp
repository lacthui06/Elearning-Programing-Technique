#include <iostream>
#include<string>
using namespace std;
int main(){
    int month;
    int temperature;

    cout<<"Enter a month (1-12) : ";
    cin>> month;
    switch (month){
        case 1:
           cout<<"It is January\n";
            break;
        case 2:
            cout<< "It is February\n";
            break;
        default:
            cout<<"Please enter the month (1-12) \n";
        return 0 ;
        }
    
    cout<<"Enter the temperature ";
    cin>>temperature;
    if (temperature <= 18){
        cout << "That's so cool.";
    }else if (temperature>=19&&temperature <25){
        cout << "That's great for the trip.";
    }else if (temperature >25){
        cout<< "So hot to do anything.";
    }else{
        cout<<"U're on the Sun.";}

    return 0;
}