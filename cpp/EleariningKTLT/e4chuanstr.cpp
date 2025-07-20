#include<iostream>
#include <string>
using namespace std;
/*Sử dụng kiểu dữ liệu string để biểu diễn dữ liệu xâu/chuỗi ký tự cho các bài tập :
Bài 1. Hãy chuẩn chuỗi danh từ bất kỳ do người dùng nhập từ bàn phím theo
các tiêu chí.
Loại bỏ khoảng trống ở đầu và cuối chuỗi nếu có.*/
string xoadaucuoi(string s) {
    while (!s.empty() && s[0] == ' ')
        s.erase(0, 1);
    while (!s.empty() && s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    return s;
}
/*Ký tự đầu tiên của chuỗi hoặc chữ cái đầu tiên sau mỗi dấu chấm câu là chữ cái
thì chuyển thành dạng in hoa.
Tất cả chữ cái còn lại nếu có chuyển thành chữ cái thường*/
string chuanchuoi(string s) {
    // Đưa toàn bộ thành chữ thường trước
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    // Viết hoa chữ cái đầu tiên
    if (!s.empty() && s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 'a' + 'A';
    // Viết hoa chữ cái sau mỗi khoảng trắng
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 'a' + 'A';
    }
    return s;
}
/*Loại bỏ khoảng trống dư thừa giữa các từ trong chuỗi
(chỉ tối đa 1 khoảng trống giữa các từ).*/
string xoagiua(string s) {
    for (int i = 0; i < s.length() - 1; ) {
        if (s[i] == ' ' && s[i + 1] == ' ')
            s.erase(i, 1);
        else i++;
    }
    return s;
}
// Hãy thêm vào cuối chuỗi nội dung E-learning ‘04’ (bao gồm cả cặp dấu nháy ‘’). 
string them(string s) {
    s += " E-learning \'04\'";
    return s;
}

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    s = xoadaucuoi(s);
    s = chuanchuoi(s);
    s = xoagiua(s);
    s = them(s);
    cout << "Chuoi sau khi chuan hoa: " << s;
}