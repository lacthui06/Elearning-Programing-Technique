// Nhập vào ngày, tháng của một năm hiện tại. Bạn hãy viết chương trình:
// Kiểm tra tính hợp lệ của ngày, tháng nhập;
// Cho biết tháng này thuộc quý mấy trong năm;
// Cho biết tháng nhập có bao nhiêu ngày;
// Cho biết ngày hôm sau của ngày đã nhập là ngày nào;
// Cho biết ngày hôm trước của ngày đã nhập là ngày nào.
#include <iostream>
using namespace std;
int main(){
    int date, days, month, year, ngaytruoc, ngaysau, quy, thangtruoc, thangsau;
    bool hople =true ;
    do {
    cout<< "Enter year : ";
    cin>> year;
    if (year<=0) cout<<"The year is invalid\n";
    }while (year <= 0);

    do {
    cout <<"Enter month : ";
    cin >> month;
    if (month <=0 || month >12) cout<<"The month is invalid\n";
    else cout<<"The month is valid\n";
    }while (month <=0 || month >12);

    cout<< "Enter the date today : ";
    cin >> date;

    bool nhuan = (year % 400 ==0) || (year % 4==0 && year % 100 != 0);
    ngaytruoc = date -1;
    ngaysau = date +1;
    thangtruoc = month -1;

    
    if (month<=3) quy =1;
    else if (month >3 && month <=6) quy =2;
    else if (month >6 && month <=9) quy =3;
    else quy =4;
    
    if (date > 31 || date <=0) hople= false;

    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            if (date ==1){
                if (month ==1) ngaytruoc =31;
                else if (month ==3) ngaytruoc = nhuan ? 29 : 28;
                else ngaytruoc = 30;
            }
            if (date == 31) ngaysau = 1;
            break;
        
        case 4: case 6: case 9: case 11:
            days = 30;
            if (date ==1) ngaytruoc = 31;
            if (date ==30) ngaysau = 1;
            break;
        
        case 2:
            if (nhuan) days = 29;
            else days=28;
            if (date ==1) ngaytruoc = 31;
            if (date ==28 || date ==29) ngaysau = 1;
            break;
    }
    // co the check hop le bang cach :
    // if (date <=0 || date > days) hople = false;
    if (hople){
        cout <<"Ngay "<< date <<" trong thang "<< month<< " hop le\n";
        cout<<"Thang "<< month<< " thuoc quy "<<quy<< '\n';
        cout<<"Thang "<< month<< " nam "<< year<< " co "<<days <<" ngay \n";
        cout<<"Hom sau cua ngay "<<date <<" la ngay "<< ngaysau <<'\n';
        cout<<"Hom truoc cua ngay "<< date <<" la ngay "<< ngaytruoc<<'\n';
    }
    else{
    cout<<"Ngay "<< date <<" trong thang "<< month<< " khong hop le\n";
    cout<<"Thang "<< month<< " thuoc quy "<<quy<< '\n';
    cout<<"Thang "<< month<< " nam "<< year<< " co "<<days <<" ngay \n";
    }
}