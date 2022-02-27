#include <iostream>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main (){
    int a[1000], n;
    nhapmang(a,n);
    int x,k=0;
    cin >> x;
    // for (int i = 0; i < n; i++){
    //     if (a[i] == x){
    //         for (int j = i; j < (n-1); j++){
    //             a[j] = a[j+1];
    //         }
    //         k++;
    //     }
    // }
    // n = n - k;
    // for (int i = 0; i < n; i++){
    //     if (a[i]==x){
    //         a[i] = 0;
    //     }
    // }

    for (int i = 0; i < n; i++){
        a[x] = 0;
    }

    for (int i = 0; i < n; i++){
        if (a[i]>0)
        cout << a[i] << " ";
    }
}