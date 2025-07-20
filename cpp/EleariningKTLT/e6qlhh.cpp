#include <iostream>
using namespace std;
#include <cstring>
/* Viết chương trình quản lý hàng hóa trong cửa hàng bằng mảng cấu trúc như sau:
- Một mảng quản lý danh mục hàng hóa, mỗi danh mục bao gồm các thông tin về: id,
tên danh mục.
- Một mảng quản lý hàng hóa, mỗi hàng hóa bao gồm các thông tin: id, tên hàng hóa,
số lượng, id danh mục. */
struct danhmuc
{
	char iddm[11];
	char tendm[50];
};
struct hanghoa
{
	char id[11];
	char tenHang[50];
	int sl;
	char iddm[11];
};
void nhapDanhMuc (danhmuc &dm)
{
    cout<<"Nhap ten danh muc : ";
    cin.getline(dm.tendm, 50);
}
int ktIDdm(danhmuc dm[], int n, char id2[])
{
    for (int i = 0; i < n; i++)
    {
    	if (strcmp(id2, dm[i].iddm) == 0)
		    return i;
    }
	return -1;
}
void nhapdm(danhmuc dm[], int i)
{
    char id2[11];
    int trung;
    do{
        cout<<"Nhap ID danh muc: "; 
        cin.getline(id2,11);
        trung = ktIDdm(dm, i, id2);
        if (trung != -1) cout<<"Ma trung, nhap lai nha!\n";
    } while (trung != -1);
    strcpy(dm[i].iddm, id2);
    nhapDanhMuc(dm[i]);
}
void nhapdsdm(danhmuc dm[], int soLuongMuc)
{
    for (int i = 0; i < soLuongMuc; i++)
    {
        cout<<"Nhap danh muc thu "<< i + 1<< endl;
        nhapdm(dm, i);
    }
}
int len(char ten[])
{
    int i =0;
    while (ten[i] != '\0')
        i++;
    return i;
}
void raThuong(char ten[])
{
    int l = len(ten);
    for (int i = 0; i < l; i++)
    {
        if (ten[i] >= 'A' && ten[i] <= 'Z')
            ten[i] += 32;
    }
}
void xoaSpace(char ten[]){
    int l = len(ten);
    raThuong(ten);
    while (ten[0] == ' ')
    {
        for (int i = 0; i < l; i++)
        {
            ten [i] = ten [i + 1];
        }
        l --;
    }
    while (ten[l - 1] == ' ')
    {
        ten [l - 1] = '\0';
        l --;
    }
    for (int i = 0; i < l - 1; i++)
    {
        if (ten[i] == ' ' && ten[i + 1] == ' ')
        {
            for (int j = i; j < l; j++)
                ten [j] = ten [j + 1];
            i --;//reset lai vi tri roi lap, tranh soat ki tu' '
            l --;
        }
    }
}
void chuanten(char ten[])
{
    int l = len(ten);
    xoaSpace(ten);
    if (ten[0] >= 'a' && ten[0] <= 'z')
        ten[0] -= 32;
    for (int i = 1; i < l - 1; i++)
    {
        if (ten[i] == ' ' && (ten[i + 1] >= 'a' && ten[i + 1] <= 'z'))
            ten[i + 1] -= 32;
    }
}
void chuanTenDM (danhmuc dm[], int soLuongMuc)
{
    for (int i = 0; i < soLuongMuc; i++)
        chuanten(dm[i].tendm);
}
void xuatdm (danhmuc dm)
{
    cout<<"Ma ID danh muc : "<< dm.iddm <<endl;
    cout<<"Ten danh muc : "<< dm.tendm <<endl;
}
void xuatdsdm (danhmuc dm[], int soLuongMuc)
{
    chuanTenDM (dm, soLuongMuc);
    cout<<"===== DANH SACH DANH MUC =====\n";
    for (int i = 0; i < soLuongMuc; i++)
        xuatdm(dm[i]);
}
//======================================================

int ktIDhh(hanghoa hh[], int n, char id2[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(id2,hh[i].id) == 0)
            return i;
    }
    return -1;
}
// KTra ID danh muc nhap vao phai trung voi cac ID danh muc da nhap
int kttontai (danhmuc dm[], int soLuongMuc, char id2[])
{
    for (int i = 0; i < soLuongMuc; i++)
    {
        if (strcmp(id2,dm[i].iddm) == 0) return i;
    }
    return -1;
}
void nhapHangHoa(hanghoa &hh, int soLuongMuc, danhmuc dm[])
{
    cin.ignore();
    cout<<"Nhap ten hang hoa : "; cin.getline (hh.tenHang, 50);
    do {
        cout<<"Nhap so luong cua mon hang : "; cin>> hh.sl;
        if (hh.sl <= 0) cout<<"So luong k hop le, nhap lai!\n";
    } while (hh.sl <= 0);
    cin.ignore();
    char id2[11];
    int tontai;
    do {
        cout<<"Nhap ID danh muc : "; cin.getline(id2, 11);
        tontai = kttontai (dm, soLuongMuc, id2);
        if (tontai == -1) cout<<"Ma khong hop le, nhap lai!\n";
    } while (tontai == -1);
    strcpy(hh.iddm, id2);
}
void nhaphh(hanghoa hh[], int i, int soLuongMuc, danhmuc dm[])
{
    char id2[11];
    int trung;
    do {
        cout<< "Nhap ID hang hoa : ";cin>>id2;
        trung = ktIDhh (hh, i, id2);
        if (trung != -1 ) cout<<"ID hang trung, nhap lai nha!\n";
    } while (trung != -1);
    strcpy (hh[i].id, id2);
    nhapHangHoa(hh[i], soLuongMuc, dm) ;
}
void nhapdshh (hanghoa hh[], int soLuongHang, int soLuongMuc, danhmuc dm[])
{
    for (int i = 0; i < soLuongHang; i++)
    {
        cout<<"----------------------\n";
        cout<<"Nhap hang hoa thu "<< i + 1 << endl;
        nhaphh(hh, i, soLuongMuc, dm);
    }
}
void chuanTenHang (hanghoa hh[], int soLuongHang)
{
    for (int i = 0; i < soLuongHang; i++)
        chuanten(hh[i].tenHang);
}
void xuathh (hanghoa hh)
{
    cout<<"ID hang hoa : "<< hh.id<< endl ;
    cout<<"Ten hang hoa : "<< hh.tenHang << endl;
    cout<<"So luong cua mon hang : "<< hh.sl<< endl;
    cout<<"ID danh muc cua mon hang : " << hh.iddm << endl;
}
void xuatdshh (hanghoa hh[], int soLuongHang, int soLuongMuc)
{
    chuanTenHang (hh, soLuongHang);
    cout<<"===== DANH SACH HANG HOA =====\n";
    for (int i = 0; i < soLuongHang; i++)
        xuathh(hh[i]);
}
// Hiển thị danh sách hàng hóa theo id danh mục. 
void hienthi(hanghoa hh[], int soLuongHang)
{
    char id2[11];
    int dem = 0;
    cout<<"--- Danh sach hang theo ID danh muc ---\n";
    cout<<"Nhap ID danh muc can tim : "; cin.getline(id2, 11);
    for (int i = 0; i < soLuongHang; i++)
    {
        if (strcmp(id2,hh[i].iddm) == 0)
        {
            xuathh (hh[i]);
            dem++;
        }
    }
    if (dem == 0) cout<<"Khong co ID can tim\n";
}
// Tính tổng số lượng các mặt hàng trên toàn bộ cửa hàng.
void tong(hanghoa hh[], int soLuongHang)
{
    int tong = 0 ;
    for (int i = 0; i < soLuongHang; i++)
        tong += hh[i].sl;
    cout<<"Tong so luong cac mat hang : "<< tong << endl;
}
// Tìm xem hàng hóa nào có số lượng nhiều nhất.
void hangNhieuNhat (hanghoa hh[], int soLuongHang)
{
    int i = 0;
    int gtln = hh[0].sl;
    for (i = 1; i < soLuongHang; i++)
    {
        if (gtln < hh[i].sl)
            gtln = hh[i].sl;
    }
    cout<<"---- Hang co so luong nhieu nhat ----\n";
    for (i = 0; i < soLuongHang; i++)
    {
        if (hh[i].sl == gtln)
            xuathh(hh[i]);
    }
}
// Tìm xem danh mục nào có số hàng hóa (phần tử) nhiều nhất.
void dmln(danhmuc dm[], int soLuongMuc, hanghoa hh[], int soLuongHang)
{
    int dem [soLuongMuc];
    for (int i = 0; i < soLuongMuc; i++)
    {
        int tong = 0;
        for (int j = 0; j < soLuongHang; j++)
        {
            if (strcmp(dm[i].iddm, hh[j].iddm) == 0)
                tong ++;
        }
        dem [i] = tong;
    }
    int gtln = dem[0] ;
    for (int i = 1; i < soLuongMuc; i++)
    {
        if (dem[i] > gtln)
            gtln = dem[i];
    }
    cout<<"--- Danh muc co nhieu hang hoa nhat ---\n";
    for (int i = 0; i < soLuongMuc; i++)
    {
        if (dem[i] == gtln)
            xuatdm(dm[i]);
    }
}
/*Hãy tìm thông tin của 1 hàng hóa theo tên do người dùng nhập vào
(không phân biệt chữ hoa, thường) và cho biết tên của danh mục chứa nó*/
int timten(hanghoa hh[], int soLuongHang, char tentim[])
{
    for (int i = 0; i < soLuongHang; i++)
    {
        if (_stricmp(hh[i].tenHang, tentim) == 0)
            return i;
    }
    return -1;
}
void chuantim (hanghoa hh[], int soLuongHang, danhmuc dm[], int soLuongMuc)
{
    char tentim[50];
    cout<<"---  Tim ten danh muc chua hang hoa ---\n";
    cout<<"Nhap ten hang muon tim : ";
    cin.ignore();
    cin.getline(tentim, 50);
    chuanten(tentim);
    int vt = timten(hh, soLuongHang, tentim);
    if (vt == -1) cout<<"Hang khong co trong danh sach\n";
    else {
        char id2[11];
        strcpy(id2, hh[vt].iddm);
        for (int i = 0; i < soLuongMuc; i++)
        {
            if (strcmp(id2, dm[i].iddm) == 0)
            {
                cout<<"Ten danh muc cua hang hoa ban tim: " << dm[i].tendm;
                break;
            }
        }
    }
}
/*Sắp xếp danh sách hàng hóa theo tên tăng dần từ a->z
không phân biệt chữ hoa, thường.*/
void hvi (hanghoa &h1, hanghoa &h2)
{
    hanghoa temp = h1;
    h1 = h2;
    h2 = temp;
}
void xep (hanghoa hh[], int soLuongHang)
{
    for (int i = 0; i < soLuongHang - 1; i++)
    {
        for (int j = i + 1; j < soLuongHang; j++)
        {
            if (_stricmp(hh[i].tenHang, hh[j].tenHang) > 0)
                hvi(hh[i],hh[j]);
        }
    }
}
int main ()
{
    int soLuongMuc, soLuongHang;
    do {
        cout<< "Nhap so luong danh muc : "; cin>> soLuongMuc;
    } while (soLuongMuc <= 0);
    do {
        cout<< "Nhap so mat hang : "; cin>> soLuongHang;
    } while (soLuongHang <= 0);
    cin.ignore();
	danhmuc *dm = new danhmuc [soLuongMuc];
    hanghoa *hh = new hanghoa [soLuongHang];
    nhapdsdm(dm, soLuongMuc); 
    xuatdsdm(dm, soLuongMuc);
    nhapdshh(hh, soLuongHang, soLuongMuc, dm);
    chuanTenHang(hh, soLuongHang); 
    xuatdshh(hh, soLuongHang, soLuongMuc);
    hienthi(hh, soLuongHang);
    tong(hh, soLuongHang);
    hangNhieuNhat(hh, soLuongHang);
    dmln(dm, soLuongMuc, hh, soLuongHang);
    chuantim(hh, soLuongHang, dm, soLuongMuc);
    xep(hh, soLuongHang);
    cout<<"-- Danh sach hang hoa sau khi sap xep --\n";
    xuatdshh(hh, soLuongHang, soLuongMuc);
}