#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;

    cout<< "Enter ur name : ";
    
    getline(cin,name );

// .length() || size()
    /*if (name.length()>20){cout << "Ur name can't be over 20 characters.";}
    else{cout<<"Hi "<<name <<"\n";}*/
    
// .empty() check string
    /* if (name.empty()){cout<<"Name can't empty.";}
    else{cout<<"Hi "<<name <<"\n";} */

// .append() || "+" to connect string
    // name.append("@gmail.com");

// .clear()     // .insert(index,new_str)

// .at() access to the position (index) || []
    //cout<<"Hi "<<name.at(0) <<"\n";

// .erase(index,length)
    /*name.erase(0,3);
    cout<<"Hi "<<name <<"\n";*/

// .find("sth") access to position of character
    // cout<<"Hi "<<name.find("t") <<"\n";

// stoi() to int // to_string()

// .substr(start, length)
    // cout<<"Hi "<<name.substr(0,3)<<"\n";

// .replace(start, length, new_str)
    name.replace(0,4,"thui");
    cout<<"Hi "<<name<<"\n";
    return 0;
}