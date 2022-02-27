
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};


void Nhapsv(SinhVien &a)
{   
    cin.ignore();
    cin.getline(a.MASV,10);
    cin.getline(a.HoTen,100);
    cin.getline(a.NgaySinh,12);
    cin>>a.GioiTinh;
    cin>>a.DiemToan;
    cin>>a.DiemLy;
    cin>>a.DiemHoa;
}
void Nhap(SinhVien A[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++) {
        Nhapsv(A[i]);
    }
}
void Nhap(char *hoTenCanXoa){
    cin.getline(hoTenCanXoa,100);
}
void Xuatsv(SinhVien A){
    A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa)/3;
    cout << string(A.MASV) << "\t";
    cout << A.HoTen << "\t";
    cout << A.NgaySinh << "\t";
    cout << A.GioiTinh << "\t";
    cout << A.DiemToan << "\t";
    cout << A.DiemLy << "\t";
    cout << A.DiemHoa << "\t";
    cout << setprecision(3) << A.DTB << endl;
}


void Xuat(SinhVien A[], int n){
    for (int i = 0; i < n; i++) {
        if(A[i].DiemHoa >= 0) Xuatsv(A[i]);
    }
}

void XoaTheoHoTen(SinhVien A[], int n, char hoTenCanXoa[100]){
    int s = 0;
    for (int i = 0; i < n; i++){
        s = strcmp(A[i].HoTen,hoTenCanXoa);
        if (s == 0) {
            A[i].DiemHoa = -2;
        }
        
    }
}


int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}
