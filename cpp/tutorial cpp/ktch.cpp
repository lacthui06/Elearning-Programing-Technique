#include <iostream>
# include <cctype>
using namespace std;
int main(){
    char ch;
    cout<<"Nhap 1 ki tu de kiem tra : ";
    cin>> ch;
    string result = isdigit(ch)? "so": 
                    (isupper (ch)? "chu hoa":
                    (islower (ch)? "chu thuong": "khac" ));
    cout<<"Day la ki tu "<<result;
}