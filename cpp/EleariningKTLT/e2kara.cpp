/* Bài 2. Viết hàm tính tiền thuê phòng cho quán karaoke như sau:
Tham số truyền vào:  
o Thời gian nhận, trả phòng: giờ, phút 
(giờ hợp lệ nằm trong khoảng từ 8 đến 23). 
o Giá theo giờ chẵn (VD người dùng thuê hết 3 giờ 20 phút thì giá theo giờ chẵn sẽ 
tính cho 3 giờ).
o Giá theo phút lẻ (VD người dùng thuê hết 3 giờ 20 phút thì giá theo phút lẻ sẽ 
tính cho 20 phút). 
Kết quả trả về: Tổng số tiền phải thanh toán. */
#include <iostream>
using namespace std;
int ttt(int gnhan, int pnhan, int gtra, int ptra ){
    int tong_pnhan = gnhan * 60 + pnhan;
    int tong_ptra = gtra * 60 + ptra;
    int tg = tong_ptra - tong_pnhan;
    int gchan = tg / 60;
    int ple = tg % 60;
    return gchan * 120000 + ple * 2000;
}
int main(){
    int gnhan, pnhan, gtra, ptra;
    do {
        cout<< "Nhap gio nhan phong : ";
        cin >> gnhan;
        if ( gnhan < 8 || gnhan > 23 ) cout<< "Gio hop le tu 8 - 23\n";
    } while ( gnhan < 8 || gnhan > 23 );
    do {
        cout<< "Nhap phut nhan phong : ";
        cin >> pnhan;
        if ( pnhan < 0  || pnhan > 59 ) cout<< "Phut hop le tu 0 - 59\n";
    } while ( pnhan < 0 || pnhan > 59 );
    do {
        cout<< "Nhap gio tra phong : ";
        cin >> gtra;
        if ( gtra < gnhan || gtra > 23 ) cout<< "Gio hop le tu 8 - 23\n";
    } while ( gtra < gnhan || gtra > 23 );
    do {
        cout<< "Nhap phut tra phong : ";
        cin >> ptra;
        if ( ptra < 0  || ptra > 59 ) cout<< "Phut hop le tu 0 - 59\n";
    } while ( ptra < 0 || ptra > 59 );

    cout<< "Tong tien thanh toan : "<< ttt( gnhan, pnhan, gtra, ptra ) << " VND";
}