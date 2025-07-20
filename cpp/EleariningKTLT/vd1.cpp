#include<iostream>
#include<fstream>
using namespace std;
void ghi_file(fstream &f)
{
	f.open("D://baitap07.txt", ios::out);
	for (int i = 1; i <= 10; i=i+2)
		f << i << " ";
	f.close();
}
void doc_file(fstream &f)
{
	f.open("D://baitap07.txt", ios::in);
	int x;
	while (f >> x)
		cout << x << endl;
	f.close();
}
int main(){
    fstream f;
	ghi_file(f);
	doc_file(f);

}