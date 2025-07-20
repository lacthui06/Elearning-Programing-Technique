#include <iostream>
using namespace std;

void blg(){
    double const PI = 3.141592653589793;
        for (int i = 5; i <=180; i += 5 ){
            cout<<"Goc "<< i <<" do\n";
            double do_goc = i * PI / 180;
            cout<< "Sin : "<< sin(do_goc) << '\n'
                << "Cos : "<< cos(do_goc) << '\n' 
                << "Tan : "<< tan(do_goc) << '\n'
                <<"-------------------------------\n";
        }
}

int main() {
    for (int i = 33; i <= 255; i++) {
        cout << i << " = " << (char)i << " :\t";
    }

    blg();
    
    return 0;
}

