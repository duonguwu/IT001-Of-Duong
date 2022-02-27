#include <iostream>
#include <math.h>
using namespace std;


int check(int n){
    if(n<2)
        return 0;
    else{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
    }
}

void tong(int a[], int& n)
{
    int s=0;
    cin>>n;
    while(n<=0||n>50)
    {
       cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
       cin>>n;
    }
    int dem=0;
    for(int i=0;dem<n;i++)
    {
        if (check(i)==1)
        {
            a[dem]=i;
            dem++;
            s+=i;
        }
    }
    cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<s<<endl;
}

int main()
{
    int a[50],n;
    tong(a,n);
}