
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &a)
{
    cin.getline(a.MASV,10);
    cin.getline(a.HoTen,100);
    cin.getline(a.NgaySinh,12);
    cin>>a.GioiTinh;
    cin>>a.DiemToan;
    cin>>a.DiemLy;
    cin>>a.DiemHoa;
}
void Xuat(SinhVien A){
    A.DTB = (A.DiemToan + A.DiemLy + A.DiemHoa)/3;
    cout << string(A.MASV) << "\t";
    cout << A.HoTen << "\t";
    cout << A.NgaySinh << "\t";
    cout << A.GioiTinh << "\t";
    cout <<A.DiemToan << "\t";
    cout << A.DiemLy << "\t";
    cout << A.DiemHoa << "\t";
    cout << setprecision(3) << A.DTB;
}
int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
