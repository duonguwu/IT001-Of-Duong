
#include <iostream>
using namespace std;
#define MAXN 100

struct PhanSo
{
    int tu;
    int mau;
};
void Nhap(PhanSo a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i].tu >> a[i].mau;
    }
}
int USCLN(int m, int d)
{
    if(m==0) return d;
    return USCLN(d%m,m);
}
void rg(int& m, int& d)
{
   int temp=USCLN(m,d);
   m /= temp;
   d /= temp;
}

void Xuat(PhanSo a[], int n){
    for (int i = 0; i<n; i++){

        if (a[i].mau == 0) cout << "Khong thoa yeu cau bai toan" << endl;
        rg(a[i].tu, a[i].mau); 
        if(a[i].tu == a[i].mau) cout << 1 << endl;
        else if (a[i].mau == 1) cout << a[i].tu << endl;
        else if(a[i].tu == 0) cout << 0 << endl;    
        else if (a[i].mau < 0) cout <<  (-1)*a[i].tu << "/" << (-1)*a[i].mau << endl;
        else{
             
            cout << a[i].tu << "/" << a[i].mau << endl;
        }
        
    }
}

int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

// #include <iostream>
// #define MAXN 100
// #include <cmath>
// using namespace std;

// struct PhanSo
// {
//     int tu;
//     int mau;
// };

// void Nhap(PhanSo a[],int &n)
// {
//     cin>>n;
//     for(int i=0;i<n;i++)
//         cin>>a[i].tu>>a[i].mau;
// }
// int gcd(int a, int b)
// {
//     if (b==0)
//     {
//         return a;
//     }
//     return gcd(b,a%b);
// }
// void Xuat(PhanSo a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//       if (a[i].mau==0)
//             cout<<"Khong thoa yeu cau bai toan"<<endl;
//         else
//         {
//             int ucln=gcd(abs(a[i].tu),abs(a[i].mau));
//             a[i].tu/=ucln;
//             a[i].mau/=ucln;
//             if(a[i].mau<0)
//             {
//                 a[i].mau=-a[i].mau;
//                 a[i].tu=-a[i].tu;
//             }
//             if(a[i].mau==1)
//             {
//                 cout<<a[i].tu<<endl;
//             }
//             else
//                 cout<<a[i].tu<<"/"<<a[i].mau<<endl;
//         }
//     }
// }