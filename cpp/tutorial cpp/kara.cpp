// Một điểm KARAOKE tính tiền khách hàng theo công thức sau: 
// Mỗi giờ trong 3 giờ đầu tiên tính 30 000 đồng/giờ, 
// Mỗi giờ tiếp theo có đơn giá giảm 30% so với đơn giá trong 3 giờ đầu tiên. 
// Ngoài ra nếu thời gian thuê phòng từ 8 – 17 giờ thì được giảm giá 10%.
// Nhập vào giờ bắt đầu, giờ kết thúc và in ra số tiền khách hàng phải trả 
// Biết rằng 8 ≤ giờ bắt đầu < giờ kết thúc ≤ 24.
# include <iostream>
using namespace std;
int main(){
    float start,end;
    int cost=30000;
    cout<<"Nhap gio bat dau : ";
    do{
        cin>>start;
        if (start <8) cout<<"8 gio moi mo cua, moi nhap lai : ";
    }while (start <8);
    cout<<"Nhap gio ket thuc : ";
    do{
        cin>>end;
        if (!(end <=24 && end>8)) cout<<"Gio ket thuc khong hop le, moi nhap lai : ";
    }while (!(end <=24 && end>8));
    long total;
    float time= end - start;
    if (time <=3) total =time*cost;
    else if (time >3) total= cost*3 +cost*0.7 *(time-3);
    if (start>=8 && end <=17) cout<<"Total is "<<total *0.9;
    else cout<<"Total is "<<total;
}    