
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

#include<cstring>
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

void SapXepGiamTheoMASV(SinhVien A[], int n){
    SinhVien tmp;
    int s=0;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            s = strcmp(A[i].MASV,A[j].MASV);
            if (s < 0){
                swap(A[i],A[j]);
            }
        }
    }
}

void Xuat(SinhVien A[], int n){
    for (int i = 0; i < n; i++) {
        Xuatsv(A[i]);
    }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
