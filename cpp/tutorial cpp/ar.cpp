# include <iostream>
using namespace std;
void nhap1c(int a[100], int n){
    for (int i = 0; i < n; i++){
        cout<<"a["<< i << "] = ";
        cin>> a[i];
    }
}
void xuat1c(int a[100], int n){
    for (int i = 0; i < n; i ++) cout<< a[i]<<' ';
}

int maxarr(int a[100], int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max) max = a[i];
    }
    return max;
}
void dsmax(int a [100], int n){
    int max = maxarr(a, n);
    for (int i = 0; i < n; i++){
        if ( a[i] == max){
            cout << a[i] << " ";
        }
    }
}

bool nt(int n){
    if (n < 2) return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int countnt(int a[100], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (nt(a[i]) == true) count ++;
    }
    return count;
}

int search(int a [100], int n, int key){
    int i = 0;
    while (i < n && a[i] != key) 
        i++;
    if (i == n) 
        return -1;
    return i;
}

void hoanvi(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}
void sapxep(int a[100], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]) hoanvi(a[i], a[j]);
        }
    }
}

void xoa(int a[100], int &n, int vtxoa){
    for (int i = vtxoa; i < n - 1; i++ )
        a[i] = a[i + 1];
    n--;
}
void xoant(int a[100], int &n){
	for (int i = 0; i < n;i++){
        if (nt(a[i]) == true){
            xoa(a, n, i);
            i--;
        }
    }
}

void chen(int a[], int &n, int vtchen, int gtchen){
	for (int i = n - 1; i >= vtchen; i--)
		a[i + 1] = a[i];
	a[vtchen] = gtchen;
	n++;
}
void chen_tang_dan(int a[], int &n, int x){
	int i = n - 1;
	while (i >= 0 && a[i] > x){
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = x;
	n++;
}
int main(){
    int arr[100];
    int n, key, vtchen, gtchen, x;
    cout<< "n = "; cin>>n;
    nhap1c(arr, n);
    cout<<"\n";
    cout << "Mang vua nhap la : ";
    xuat1c(arr, n);
    cout<< "gtln : " << maxarr (arr, n);
    cout << "\n" << "Cac phan tu lon nhat : ";
    dsmax(arr, n);
    cout<< "\n";
    cout<< "Nhap key : "; cin >>key;
    cout<< "Vi tri cua "<< key << " : "<< search(arr, n, key) << "\n";
    //cout<< "Chuoi tang dan : ";
    sapxep(arr, n);
    //cout << "Chuoi sau khi xoa so nguyen to : ";
    //xoant (arr, n); xuat1c(arr, n);
    //cout<<"Nhap vao vi tri chen: "; cin>>vtchen;
    cout<<"Nhap vao gia tri chen : "; cin>>x; chen_tang_dan(arr, n, x);
    cout<<"Chuoi sau khi chen tang dan : ";xuat1c(arr, n);
}