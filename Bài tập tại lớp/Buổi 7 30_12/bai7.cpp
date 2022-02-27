
#include <iostream>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};
void Nhap(PhanSo &a){
    cin >> a.tu >> a.mau;
}
PhanSo Nhap(){
    PhanSo b;
    cin >> b.tu >> b.mau;
    return b;
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
PhanSo Cong(PhanSo a, PhanSo b){
    PhanSo sum = {(a.tu * b.mau) + (b.tu * a.mau), a.mau * b.mau};
    rg(sum.tu,sum.mau);
    return sum;
}
void Xuat(PhanSo sum){
    if(sum.tu == sum.mau) cout << 1 << endl;
    else if (sum.mau < 0) {
        if (sum.mau == -1) cout << -1;
        else
        cout <<  (-1)*sum.tu << "/" << (-1)*sum.mau << endl;
    }
    else if (sum.mau == 1) cout << sum.tu << endl;
    else if(sum.tu == 0) cout << 0 << endl;    
    else{ 
        cout << sum.tu << "/" << sum.mau << endl;
    }
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}
