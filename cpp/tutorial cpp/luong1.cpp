// Nhà quản lý (mã số 1) nhận một khoản lương cố định X (theo tuần).
// Công nhân làm theo giờ (mã số 2) nhận một khoản lương cơ bản Y đồng
//trong 40 giờ đầu trong tuần & 1.5 lần lương cơ bản cho mỗi giờ vượt mức quy định đó. 

// Lương công nhân theo lợi nhuận (mã số 3) được nhận 500,000đ
//cộng thêm 7% trị giá doanh số Z mà công nhân ấy bán hàng ra trong tuần. 

// Lương công nhân theo sản phẩm (mã số 4) nhận tiền dựa vào số N sản phẩm
//mà người đó đã làm ra trong tuần, với mỗi sản phẩm thì người này nhận được S đồng
//(mỗi người chỉ làm ra một loại sản phẩm nhất định). 

// Nhập vào mã số, tùy theo loại công nhân mà cho phép nhập vào những thông tin
//cần thiết cho công nhân đó để tính lương & tính lương mà công ty phải trả cho nhân viên ấy trong tuần. 

# include <iostream>
using namespace std;
int main(){
    int choose, nv1=1, nv2=2, nv3=3, nv4=4, x, y, tg, z, s, n;
    long long luong;
    cout<<"Nhap vao ma so \nNha quan li (1) \nCong nhan lam theo gio (2) \n"
    <<"Cong nhan theo loi nhuan (3) \nCong nhan theo san pham (4) \n Ban chon : ";
    do{
    cin >>choose;
    if (choose>4 || choose <1) cout<< "Chon 1-4 moi hop le : ";
    }while (choose>4 || choose <1);

    if (choose ==1 ){
        cout<<"Nhap luong cho sep :";
        do {
            cin>>x;
            if (x<=8500000) cout<<"Luong sep thap hon nhan vien roi! \n"
                                <<"Moi nhap lai cao hon";
        }while (x<=8500000);
    cout<< "Luong cho sep : "<< x;
    }

    else if (choose ==2){
        cout<<"Nhap luong cho cong nhan lam theo gio : ";
        do{
            cin>>y;
            if (y >200000) cout<<"Luong qua cao, moi nhap lai : ";
        }while (y >200000);
        cout<<"Nhap thoi gian lam viec trong tuan (gio) : ";
        do {
            cin>>tg;
            if (tg <=0 ) cout<<"Thoi gian lam viec khong hop le\n"
                            << "Moi nhap lai : ";
            else if (tg >50 ) cout<<"Khong duoc tang ca qua suc\n"
                                << "Moi nhap lai : ";
        }while (tg <=0 || tg>50);
        if (tg>40) luong = 40*y +y*1.5*(tg-40);
        cout<<"Luong cho cong nhan lam viec theo gio : "<<luong;
    }

    else if (choose ==3 ){
        cout<<"Nhap tri gia doanh thu cua tuan :";
        do {
            cin>>z;
            if (z <100000000) cout<<"Doanh thu qua thap, moi nhap lai : ";
        }while (z <100000000);
    luong = 500000 + z*0.07;
    cout<<"Luong cho cong nhan lam viec theo doanh thu : "<<luong;
    }
    
    else if (choose ==4 ){
        cout<<"Nhap so san pham ban duoc cua tuan : ";
        do {
            cin>>n;
            if (n<100) cout<<"So san pham ban duoc qua it, moi nhap lai : ";
            else if (n >1000) cout<<"So san pham ban duoc qua nhieu \n"
                                    <<"Moi nhap lai : ";
        }while (n<100 ||n >250);
        cout<< "Nhap tien hoa hong tren 1 san pham : ";
        do {
            cin>>s;
            if (s< 25000) cout<<"Tien hoa hong qua thap, moi nhap lai : ";
            else if (s> 30000) cout<<"Tien hoa hong qua cao, moi nhap lai : ";
        }while (s< 25000 ||s> 28000 );
    luong = n* s;
    cout<<"Luong cua cong nhan lam viec theo san pham : "<<luong;
    }
}    