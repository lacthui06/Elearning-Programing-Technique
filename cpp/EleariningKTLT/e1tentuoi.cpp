#include <iostream>
#include <string>
using namespace std;
int main(){
    int hientai=2025, ns1, ns2;
    string ten1, ten2;
    cout<<"Nhap ten nguoi thu nhat : \n";
    getline(cin, ten1);
    cout<<"Nhap nam sinh nguoi thu nhat : \n";
    cin>>ns1;
    cin.ignore();
    
    cout<<"Nhap ten nguoi thu hai : \n";
    getline(cin, ten2);
    cout<<"Nhap nam sinh nguoi thu hai : \n";
    cin>>ns2;
    cout<<"Ho va ten : "<<ten1<<'\t'<<"Tuoi : "<<hientai-ns1<<'\n'
    <<"Ho va ten : "<<ten2<<'\t'<<"Tuoi : "<<hientai-ns2;
    return 0;
}