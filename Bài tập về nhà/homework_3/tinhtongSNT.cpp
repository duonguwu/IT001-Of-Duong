#include <iostream>
#include <math.h>
using namespace std;


int songuyento(int n){
    if (n < 2)
        return 0;
    for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return 0;
    }
    }
    return 1;
}


void NhapmangSNT(int a[], int& n){
    int s = 0;
    cin >> n;
    while (n<=0 || n>50){
        cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
        cin >> n;
    }
    int dem = 0;
    for (int i = 0; dem < n; i++){
        if (songuyento(i)==1){
            a[dem]=i;
            dem++;
            s+=i;
        }
    } 
    cout<<"Tong "<<n<<" so nguyen to dau tien la: "<<s<<endl;

}

int main(){
    int n, a[50];
    NhapmangSNT(a,n);
}




// void nhap(int& n){
//     cin >> n;
//     while (n<=0 || n>=50){
//         // cout << "Gia tri vua nhap la " << n << ", khong hop le. Vui long nhap lai." << endl;
//         cout<<"Gia tri vua nhap la "<<n<<", khong hop le. Vui long nhap lai."<<endl;
//         cin >> n;
//     }
// }