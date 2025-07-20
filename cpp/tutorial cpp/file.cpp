#include<iostream>
#include<fstream>
using namespace std;
void ghi_file(fstream &f)
{
	f.open("C:\\Users\\thaia\\Documents\\baitap07.txt", ios::out);
	for (int i = 1; i <= 10; i=i+2)
		f << i << " ";
	f.close();
}
void doc_file(fstream &f)
{
	f.open("C:\\Users\\thaia\\Documents\\baitap07.txt", ios::in);
	int x;
	while (f >> x)
		cout << x << endl;
	f.close();
}
void ghi_file_nhi_phan(fstream &f)
{
	f.open("C://baitap07.bin", ios::out|ios::binary);
	for (int i = 1; i <= 20; i = i + 3)
		f.write(reinterpret_cast<char*>(&i), sizeof(i));
	f.close();
}
void doc_file_nhi_phan(fstream &f)
{
	f.open("C://baitap07.bin", ios::in | ios::binary);
	int x;
	while (f.read(reinterpret_cast<char*>(&x), sizeof(x)))
		cout << x << endl;

	f.close();
}
int main()
{
	fstream f;
	ghi_file(f);
	doc_file(f);
	//ghi_file_nhi_phan(f);
	//doc_file_nhi_phan(f);
	cout << endl;
	return 0;
}