// Nhập vào số Km đã đi của 1 xe taxi.
// Tính tổng tiền phải trả cho quãng đường đó.
// Biết rằng: Km đầu tiên giá: 15 000 đ/Km. 
// Từ Km 2 trở đi giá 12000đ/Km. Thuế giá trị gia tăng: 10% trên tổng tiền trả.
# include <iostream>
using namespace std;
int main(){
    int n, tong=0, gia;
    do{
        cout<<"Nhap so Km da di : ";
        cin >>n;
    }while (n<=0);
    if (n == 1)
        tong=15000*1.1;
    if (n>=2){
        gia=12000;
        tong= ((n-1) *gia+15000)*1.1;
    }
    cout<<"Total : " <<tong;
    return 0;
}