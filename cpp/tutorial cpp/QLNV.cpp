/*Bài 2: Cho nhân viên có các thành phần: Mã, Họ tên, Số ngày công, Lương ngày, Tổng nhận
	1.Khai báo cấu trúc nhân viên
	2.Nhập/xuất danh sách nhân viên
	3.Tìm nhân viên theo mã
	4.Tìm nhân viên theo tên
	5.Xuất ra màn hình danh sách nhân viên có tổng nhận lớn nhất
	6.Sắp xếp ds nhân viên giảm dần theo tổng nhận
	7.Xóa 1 nhân viên theo mã */
#include<iostream>
using namespace std;
struct NHANVIEN
{
	int ma;
	char hoTen[100];
	float ngayCong;
	int luongNgay;
	long long tongLuong;
};
bool trungMa(NHANVIEN *ds, int soLuongDaNhap, int maMoi)
{
	for (int i = 0; i < soLuongDaNhap; i++)
	{
		if ((ds + i)->ma == maMoi) return true;
	}
	return false;
}
int doDaiTen(NHANVIEN *nv)
{
	int i = 0;
	while (nv->hoTen[i] != '\0') i++;
 	return i;
}
void xoaSpace(NHANVIEN *nv)
{
	int dai = doDaiTen(nv);
	while (nv->hoTen[0] == ' ') {
		for (int i = 0; i < dai; i++) 
			nv -> hoTen[i] = nv->hoTen[i + 1];
        	dai --;
	}
	while (nv -> hoTen[dai - 1] == ' ') {
		nv -> hoTen[ dai - 1] = '\0';
		dai --;
	}
	for (int i = 0; i < dai - 1; i++) // nếu cho chạy tới 'dai' thì sẽ k có kí tự ở đấy để duyệt cho j + 1
	{
		if (nv -> hoTen [i] == ' ' && nv -> hoTen [i + 1] == ' ')
		{
			for (int j = i; j < dai ; j++)
				nv -> hoTen [j] = nv -> hoTen [j + 1];
			dai --;
			i --;
		}
	}
}
void raThuong(NHANVIEN *nv)
{
	int dai = doDaiTen(nv);
	for (int i = 0; i < dai; i++)
	{
		if (nv -> hoTen[i] >= 'A' && nv -> hoTen[i] <= 'Z')
	 		nv -> hoTen[i] += 32;
	}
}
void chuanTen(NHANVIEN *nv)
{
	xoaSpace (nv);
	raThuong (nv);
	int dai = doDaiTen(nv);
	nv -> hoTen [0] -= 32;
	for (int i = 1; i < dai; i++)
	{
		if ((nv -> hoTen[i] >= 'a'   && nv -> hoTen[i] <= 'z' ) && nv -> hoTen[i - 1] == ' ')
			nv -> hoTen[i] -= 32;
	}
}
void nhapIn4(NHANVIEN *nv, NHANVIEN *ds, int soLuongDaNhap)
{
	int maMoi;
	bool trung;
	do {
		cout<< "Nhap ma : "; cin >> maMoi;
		trung = trungMa (ds, soLuongDaNhap, maMoi);
		if (trung || maMoi < 0 || cin.fail())
		{
			cout<<"Loi nhap, moi nhap lai !\n"; 
			cin.clear(); // xóa trạng thái lỗi
        	cin.ignore(1000, '\n'); // bỏ toàn bộ dữ liệu sai trong buffer
        	trung = true; // gán true để lặp lại
        	continue;
		}
	} while (trung || maMoi < 0 || cin.fail());
	nv -> ma = maMoi; 
	cin.ignore();
	cout<<"Nhap ho va ten : ";
	cin.getline (nv -> hoTen, 100);
	chuanTen(nv);
	do {
		cout<<"Nhap so ngay cong : "; cin >> nv -> ngayCong;
	} while ( nv -> ngayCong < 0);
	do {
		cout<<"Nhap luong 1 ngay : "; cin >> nv -> luongNgay;
	} while (nv -> luongNgay <= 0);
	nv -> tongLuong = nv -> ngayCong * nv ->  luongNgay;
}
void nhapDSNV(NHANVIEN *ds, int soluong)
{
	for (int i = 0; i < soluong; i++)
	{
		cout<<"Nhap thong tin nhan vien "<< i + 1 << " : \n";
		nhapIn4 (ds + i, ds, i); // nv = ds + i
	}
}
void xuatIn4(NHANVIEN *nv)
{
	cout<<"Ma nhan vien : "<< nv -> ma << endl;
	cout<<"Ho va ten : " << nv -> hoTen << endl;
	cout<<"So ngay cong : " << nv -> ngayCong << endl;
	cout<<"Luong 1 ngay : " << nv -> luongNgay << endl;
	cout<< "Tong luong : "<< nv -> tongLuong << endl;
}
void xuatDSNV(NHANVIEN *ds, int soluong)
{
	for (int i = 0; i < soluong; i++)
	{
		cout<<"==========================\n";
		cout<<"Thong tin nhan vien "<< i + 1 << " : \n";
		xuatIn4(ds + i); // nv = ds + i
	}
}
void timMa(NHANVIEN *ds, int soluong, int maCanTim)
{	
	bool found = false;
	for (int i = 0; i < soluong; i++)
	{
		if ((ds + i) -> ma == maCanTim)
		{
			cout << "Thong tin nhan vien co ma can tim\n";
			xuatIn4(ds + i);
			found = true;
			break;
		}
	}
	if (!(found)) cout << "DEO NHAP TIM CC\n";
}
bool soSanh2M (char m1 [], char m2 [])
{
	int i = 0;
	while (m1[i] != '\0' && m2[i] != '\0')
	{
		if (m1[i] != m2[i]) return false;
		i ++;
	}
	return m1[i] == '\0' && m2[i] == '\0';
}
void timTen(NHANVIEN *ds, int soluong, char tenCanTim [])
{
	bool found = false;
	for (int i = 0; i < soluong; i++)
	{
		if (soSanh2M((ds + i)->hoTen, tenCanTim))
		{
			cout << "Thong tin nhan vien co ten can tim:\n";
			xuatIn4(ds + i);
			found = true;
			break;
		}
	}
	if (!found) cout << "Khong co ten nay!\n";
}
void timNvGiauNhat (NHANVIEN *ds, int soluong)
{
	long long maxLuong = ds -> tongLuong;
	int vtln = 0;
	for (int i = 1; i < soluong; i++)
	{
		if ((ds + i) -> tongLuong > maxLuong)
		{
			maxLuong = (ds + i) -> tongLuong;
			vtln = i;
		}
	}
	cout << "Thong tin nhan vien co tong luong cao nhat\n";
	xuatIn4(ds + vtln);
}
void sapGiam(NHANVIEN *ds, int soluong)
{
 	for (int i = 0; i < soluong - 1; i++)
	{
        	for (int j = i + 1; j < soluong; j++)
        	{
            		if ((ds + i) -> tongLuong < (ds + j) -> tongLuong)
            		{
                		NHANVIEN temp = *(ds + i); // hoán đổi 2 nhân viên phải dùng struct đổi
                		*(ds + i) = *(ds + j);
                		*(ds + j) = temp;
            		}
        	}
	}
}
int vtXoaMa(NHANVIEN *ds, int soluong, int maXoa)
{
	int vtXoa = -1;
	for (int i = 0; i < soluong; i++)
	{
		if ((ds + i) -> ma == maXoa)
		{
			vtXoa = i;
			break;
		}
	}
	return vtXoa;
}
void xoa(NHANVIEN * ds, int *soluong, int maXoa)
{	
	int vtXoa = vtXoaMa (ds, *soluong, maXoa);
	if (vtXoa == -1)
	{
		cout << "Khong tim thay ma de xoa\n";
		return;
	}
	for (int i = vtXoa ; i < *soluong - 1; i++) *(ds + i) = *(ds + i + 1);
	(*soluong) --;
	cout << "Da xoa nhan vien co ma " << maXoa << "\n";
}
int main()
{
	int soluong, maCanTim, maXoa;
	do {
		cout<<"Nhap so luong nhan vien: "; cin >>soluong;
		if (soluong <= 0 || cin.fail())
		{
			cout<<"Loi nhap, moi nhap lai !\n"; 
			cin.clear();
        	cin.ignore(1000, '\n');
			soluong = -1;
			continue;
		}
	} while (soluong <= 0 || cin.fail());
	NHANVIEN *ds = new NHANVIEN [soluong];
	nhapDSNV(ds, soluong); xuatDSNV(ds, soluong);
	char tenCanTim [100];
	cout<< "Nhap ma nhan vien can tim : ";
	cin >> maCanTim;
	timMa (ds, soluong, maCanTim);
	cin.ignore();
	cout<< "Nhap ten nhan vien can tim : ";
	cin.getline(tenCanTim, 100); 
	timTen (ds, soluong, tenCanTim);
	timNvGiauNhat (ds, soluong);
	sapGiam(ds, soluong); xuatDSNV(ds, soluong);
	cout<< "Nhap vao ma cua nhan vien can xoa : "; cin >> maXoa;
	xoa(ds, &soluong, maXoa);
}