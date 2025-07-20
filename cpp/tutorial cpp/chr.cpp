//tinh do dai chuoi , doi ra hoa - thuong,
#include <iostream>
#include <string>
using namespace std;
void dodai(string str1){
    int count = 0;
    for (char i : str1 ) count ++;
    cout<< count;
} // int i = 0;
//while (s[i]!= "\0")
    //i++;
//return i;
// doi ra hoa
void rahoa(char chuoi[]){
    int l = strlen(chuoi);
    for (int i = 0; i < l; i++){
        if (chuoi[i] >= 'a' && chuoi[i] <= 'z'){
            chuoi[i] = chuoi[i] - 32;
        }// ki tu hoa be hon ki tu thuong 32 bit/don vi
    }
}
void chuan_noun(char chuoi[]){
    int l = strlen(chuoi);
    bool space = false;
    for(int i = 0; i < l; i++){
        if (i == ' ') ;
    }
}
int main (){
    //string str1 = "   tao   yEu  em   ";
    char chuoi [100] = "   tao   yEu  em   "; 
    //dodai(str1);
    //rahoa(chuoi);
    //cout<< chuoi;
}