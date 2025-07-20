# include <iostream>
using namespace std;

# include <limits> // khai báo lib dùng cin.clear() và cin.ignore()
void inputNumber(float &num) {
    while (!(cin >> num)) { // Nếu nhập sai (ví dụ: nhập chữ)
        cout << "Lỗi! Vui lòng nhập số: ";
        cin.clear(); // Xóa trạng thái lỗi
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bộ nhớ đệm
    }
}


int main(){
    float a,b,c,d,e,f,x,y;
    cout<<"Enter a, b, c, d, e, f : ";
    inputNumber(a); inputNumber(b); inputNumber(c);
    inputNumber(d); inputNumber(e); inputNumber(f);

    if (a == 0){
        if ( b == 0){
            if ( c == 0){
                if ( f == 0)
                    cout << "INFINITE SOLUTION";
                else {
                    if ( (d == 0 || e == 0) && (d!=0 && e !=0)){
                        cout << "INFINITE SOLUTION";
                    } else 
                        cout << "NO SOLUTION";
                }
            } else 
                cout << "NO SOLUTION";
        } else {
            y = c / b;
            if (d == 0)
                cout<<"NO SOLUTION";
            else {
                if (e == 0)
                    x = f /d;
                else {
                    x = ( f - e* ( c / b) ) / d;
                    cout <<"x = "<< x<<"  :  "<<"y = "<<y;
                }
            }
        }
    } else { // a!= 0
        if ( b==0){
            x = c/a;
            if ( d==0)
                y = f/e; 
            else{
                y = (f - d*( c / a )) / e;
                cout <<"x = "<< x<<"  :  "<<"y = "<<y;
            }
        } else {
            y = (c - a*x) / b;
            x = ( c - b*y ) / a;
            if ( d== 0){
                y = f / e;
                x = ( c - b* ( f / e)) / a;
                cout <<"x = "<< x<<"  :  "<<"y = "<<y;
            }else {
                y =( f*a - d*c) / ( a*e -d*b);
                x = ( f*b - e*c)/ (b*d - e*a) ;
                cout <<"x = "<< x<<"  :  "<<"y = "<<y;
            }
        }
    }
    return 0;
}
