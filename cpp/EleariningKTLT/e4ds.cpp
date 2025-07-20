#include <iostream>
#include <string>
using namespace std;
/*Sử dụng kiểu dữ liệu string để biểu diễn dữ liệu xâu/chuỗi ký tự cho bài tập sau:
Bài 2. Hãy nhập/xuất danh sách Họ và Tên của n sinh viên: */
void nhap(string a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap ho ten sinh vien thu " << i + 1 << ": ";
        getline(cin, a[i]);
    }
}
void xuat(string a[], int n) {
    cout << "Danh sach sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << a[i] << endl;
    }
}
// a) Tìm những sinh viên có Họ là "Nguyen"
string ho(string s) {
    int pos = s.find(' ');
    if (pos >= 0 && pos < s.length())//if (pos != string::npos) 
        return s.substr(0, pos);
    else return s; // Không có khoảng trắng thì cả chuỗi là họ
}
string chuyenThuong(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    return s;
}
void timNguyen(string a[], int n) {

    cout << "Sinh vien co ho Nguyen:\n";
    for (int i = 0; i < n; i++) {
        string h = ho(a[i]);
        h = chuyenThuong(h);
        if (h == "nguyen")
            cout << a[i] << endl;
    }
}
int demho(string a[], int n) {
    int dem = 0;
    string hoDaCo[100];
    for (int i = 0; i < n; i++) {
        string hoNguyen = chuyenThuong(ho(a[i]));
        bool daCo = false;
        for (int j = 0; j < dem; j++) {
            if (hoDaCo[j] == hoNguyen) {
                daCo = true;
                break;
            }
        }
        if (!daCo) {
            hoDaCo[dem] = hoNguyen;
            dem++;
        }
    }
    return dem;
}

// c) Tìm sinh viên có Tên bắt đầu bằng A hoặc T
string ten(string s) {
    int pos = s.rfind(' ');
    if (pos >= 0 && pos < s.length())
        return s.substr(pos + 1);
    else return s; // Không có khoảng trắng thì cả chuỗi là tên
}
void timTen(string a[], int n) {
    cout << "Sinh vien co ten bat dau bang A hoac T:\n";
    for (int i = 0; i < n; i++) {
        string tenTim = ten(a[i]);
        if (!tenTim.empty()) {
            char ch = tenTim[0];
            if (ch == 'A' || ch == 'a' || ch == 'T' || ch == 't')
                cout << a[i] << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    cin.ignore();
    string ds[100];
    nhap(ds, n);
    xuat(ds, n);
    timNguyen(ds, n);
    cout << "So ho khac nhau: " << demho(ds, n) <<endl;
    timTen(ds, n);
}
