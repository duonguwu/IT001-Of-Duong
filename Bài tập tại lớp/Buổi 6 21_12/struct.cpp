#include <iostream>
using namespace std;

struct SV
{
    char ten[50];
    char mssv[10];
    char lop[5];
};

void nhapsinhvien(SV &sv){
    fflush(stdin);
    cout << "Nhap ten sinh vien: ";
    gets(sv.ten);
    fflush(stdin);
    cout << "Nhap ma so sinh vien: ";
    gets(sv.mssv);
    fflush(stdin);
    cout << "Nhap lop cua sinh vien: ";
    gets(sv.lop);
}

void xuatsinhvien(SV sv){
    cout << "Ten sinh vien: ";
    cout << sv.ten << endl;
    cout << "Ma so sinh vien: ";
    puts(sv.mssv);
    cout << "Lop cua sinh vien: ";
    puts(sv.lop);
}

int main(){
    SV sv;
    nhapsinhvien(sv);
    xuatsinhvien(sv);
}