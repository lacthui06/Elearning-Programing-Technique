#include <iostream>
#include <cmath>
using namespace std;

bool cp(int n){
    bool flag = false;
    for (int i =1; i*i <= n; i++ ){
        if (n == i*i){
            flag= true;
            break;
        }
    }
    return flag ;
}

int tong(int n){
    int tong=0;
    for (int i =1; i<=n; i+=2) tong+=i;
    return tong;
}

float tongpso(int n){
    float tongpso=0;
    for (int i =2; i<=n; i++){
        tongpso += 1.0/ (i* (i+1) );
    }
    return tongpso;
}

float tongcan(int n){
    float tongcan=0;
    for (int i = 1; i<=n ; i++){
        tongcan=sqrt(3+tongcan);
    }
    return tongcan;
}

float canbinh(int n){
    float canbinh=0;
    for (int i= 1; i<=n ; i++) canbinh += i*i;
    return canbinh = sqrt( canbinh );
}

int chiahet(){
    int count = 0;
    for (int i =1 ; i<= 100; i++){
        if (i % 7 ==0 || i % 3 ==0){
            count ++; 
            cout <<i <<' ';
        }
    }
    return count;
}

void thuaso(int n){
    for (int i = 2; i<= n; i++ ){
        while (n % i == 0){
            cout<< i<<' ';
            n /= i;
        }
    }
}

int ucln(int a, int b){
    if ( a== 0 || b == 0) return a+b;
    else{             
        while ( b != 0 ){
            int r = a % b;
            a = b;
            b = r;
        }
    return a;
    }
}

void np(int n){
    if (n > 0) np(n / 2);
    cout<< n % 2;
}

bool cp1(int n){
    int sqrtn = sqrt(n);
    return (sqrtn * sqrtn == n);
}

bool hh(int n){
    int tong = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0) tong +=i;
    }
    return (tong == n);
}

int countn(int n){
    int countn = 0;
    while (n > 0){
        countn ++;
        n /= 10;
    }
    return countn;
}
bool ss(int n) {
    int len = countn(n);
    int divisor = (int)pow(10, len - 1);  // Tính trước divisor
    while (n >= 10) {
        int ptdau = n / divisor;
        int ptcuoi = n % 10;
        if (ptdau != ptcuoi) return false;
        n = (n % divisor) / 10;  // Bỏ chữ số đầu và cuối
        divisor /= 100;  // Cập nhật divisor vì đã bỏ đi 2 chữ số
    }
    return true;
}

int csmax(int n){
    int csmax = 11;
    while (n > 1){
        int du = n % 10 ;
        if (du > csmax ) csmax = du;
        n /= 10;
    }
    return csmax;
}

bool toanchan(int n){
    while(n>0){
        int du;
        du = n % 10;
        if (du % 2 == 1){
            return false;
            break;
        }
        n /= 10;
    }
    return true;
}

int tanggiam(int n){
    bool tang = false, giam = false, bang = false;
    int dudau = n % 10;
    n /= 10;
    while (n > 0){
        int dusau = n % 10;
        n /= 10;
        if (dudau > dusau) tang = true;
        if (dudau < dusau) giam = true;
        if (dudau == dusau) bang = true;
        dudau = dusau;
    }
    if (tang && giam) return 3;
    if (tang) return 0;
    if (giam) return 1;
    if (bang) return 2;
    return -1;
}
// a.S = 1+2+3+...+n
int tonga(int n){
    if (n == 1) return 1;
    return tonga(n - 1) + n;
}

// b.S = 1/1+1/2+...+1/n
float tongb(int n){
    if (n == 1) return 1.0;
    return 1.0 / n + tongb(n - 1);
}

// c.P = 1*2*3*..n
int tichc(int n){
    if (n == 1) return 1;
    return n * tichc(n-1);
}

long long gthuacl(int n){
    long long gthua = 1;
    for (int i = (n % 2 == 0) ? 2 : 1 ; i<= n; i+=2)
        gthua*=i;
    return gthua;
}
long long gthua(int n){
    if (n == 1) return 1;
    return n * gthua (n - 1);
}
// d.S = 1!+2!+... n!
int tonggt(int n){
    if (n == 1) return 1;
    return gthua(n) + tonggt(n - 1);
}

// e.S = 2+4+6...+k (k=n-1 nếu n lẻ và bằng n nếu n chẵn)
int tongchan(int n){
    if (n < 2) return 0;
    if (n % 2 == 1) return tongchan(n - 1);
    return n + tongchan(n - 2);
}

// f. S = 1/1 + 1/3 + 1/5...+1/k (k=n nếu n lẻ và bằng n+1 nếu n chẵn)
float tongpsle(int n){
    if (n == 1) return 1;
    if (n % 2 == 1) return 1.0 / n + tongpsle(n - 2);
    return tongpsle(n - 1);
}
int main(){
    int n, tram, chuc, dv;
    cout<<"Nhap n : ";
    do{
    cin>> n;
    if (n<=0) cout<<"Nhap 1 so nguyen duong";
    }while (n<=0);

    if (cp(n)) cout<< n<< " la so chinh phuong\n";
    else cout<<n <<" khong phai la so chinh phuong\n";

    cout<<"Giai thua cua doan thuoc n : "<<gthua(n) <<" va tong cua n : "<<canbinh(n);
    cout<< '\n';
    
    cout<<"Chuoi cac phan tu chia het cho 3 hoac 7 : \n";
    int sopt = chiahet();
    cout <<"\nCo "<<sopt <<" phan tu";
    cout<< '\n';

    cout<<"Thua so nguyen to cua "<< n<< " la "; thuaso(n);
    cout<<'\n';
    
    int a, b;
    do {
        do {cout<<"Nhap a : ";
        cin >> a;
        }while (a < 0);
        do {cout<<"Nhap b : ";
        cin >> b;
        }while (b < 0);
    }while (a==0 && b==0);
    int ucmax = ucln(a, b);
    cout<< "Uoc chung lon nhat : "<< ucmax << "\n"
    << "Boi chung nho nhat : "<< a*b / ucmax <<"\n";

    cout<< n << " chuyen thanh nhi phan : "; np(n); cout<<"\n";

    if (cp1(n)) cout<<n <<" la so chinh phuong\n";
    else cout<<n <<" khong phai so chinh phuong\n";

    if (hh(n)) cout<<n <<" la so hoan hao\n";
    else cout<<n <<" khong phai so hoan hao\n";

    if (ss(n)) cout<<n <<" la so doi xung\n";
    else cout<<n <<" khong phai so doi xung\n";

    cout<<"Chu so lon nhat : "<< csmax(n);\

    if (toanchan) cout<< n<<" toan chu so chan\n";
    else cout<< n<<" co chu so khong phai chan\n";

    int result = tanggiam(n);
    if (result == 0) cout<<"Cac chu so tang dan\n";
    if (result == 1) cout<<"Cac chu so giam dan\n";
    if (result == 2) cout<<"Cac chu so khong doi\n";
    if (result == 3) cout<<"Cac chu so hon loan\n";
    
    cout<<"Tong a : "<< tonga(n)<< "\n";
    cout<<"Tong b : "<< tongb(n)<< "\n";
    cout<<"Tich c : "<< tichc(n)<< "\n";
    cout<<"Tong giai thua d : "<< tonggt(n)<< "\n";
    cout<<"Tong chan e : "<< tongchan(n)<< "\n";
    cout<<"Tong phan so le f : "<< tongpsle(n)<< "\n";
}