// Tính lương của nhân viên dựa theo thâm niên công tác (TNCT) như sau: 
// Lương = hệ số * lương căn bản, trong đó lương căn bản là 650000 đồng. 
// Nếu TNCT < 12 tháng: hệ số = 1.92 
// Nếu 12 <= TNCT < 36 tháng: hệ số = 2.34 
// Nếu 36 <= TNCT < 60 tháng: hệ số = 3 
// Nếu TNCT >= 60 tháng: hệ số = 4.5 

# include <iostream>
using namespace std;
int main(){
    int luong = 650000;
    float hs, tnct;
    do {
        cout<<"Nhap tham nien cong tac (theo thang): ";
        cin>> tnct;
        if (tnct <=0) cout<<"NGU , NHAP LAI DI\n";
    }while (tnct <=0);
    if (tnct<12)tnct=1.92;
    else if (tnct >=12 && tnct <36) tnct=2.34;
    else if (tnct >= 36 && tnct <60) tnct=3.0;
    else tnct= 4.5;
    long total = luong*tnct;
    cout<<"Luong : "<<total<< " VND";
}