# include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x = 2;
}
int main(){
    using namespace first; // another : using name space std; 
    std:: string name = " Lac"; // string name = "Lac "
    std ::cout <<"Hello "<< name << std :: endl; // cout << "Hello "<< name << std :: endl;

                                // using namespace first;
    int x = 0;                  // xxx
    std :: cout << first:: x;   // std :: cout << x;
    return 0;  
}

