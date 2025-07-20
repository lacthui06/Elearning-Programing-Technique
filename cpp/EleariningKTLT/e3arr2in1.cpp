/* Bài 2. Cho 2 dãy số nguyên A, B đã dược sắp xếp tăng dần.
Hãy trộn A và B thành dãy C sao cho dãy C cũng có thứ tự tăng dần
mà không cần sắp xếp lại.*/
#include <iostream>
using namespace std;
void tron(int a1[], int na1, int a2[], int na2, int a3[], int &na3){
    int i = 0, j = 0, k = 0;
    while (i < na1 && j < na2){
        if ( a1[i] < a2[j]){
            a3[k] = a1[i];
            k++; i++;
        }
        else {
            a3[k] = a2[j];
            k++; j++;            
        }
    }
    while (i < na1){
        a3[k] = a1[i];
        k++; i++;
    }
    while (j < na2){
        a3[k] = a2[j];
        k++; j++;
    }
    na3 = k;
}
int main(){
    int a1 [] = {1, 3, 6, 9, 12},
    a2 [] = {-3, 0, 2, 7, 8},
    a3 [100], na3;
    int na1 = sizeof(a1) / sizeof(a1[0]);
    int na2 = sizeof(a2) / sizeof(a2[0]);
    tron(a1, na1, a2, na2, a3, na3);
    cout << "Mang C sau khi tron: ";
    for (int i = 0; i < na3; i++) cout << a3[i] << " ";
    return 0;
}