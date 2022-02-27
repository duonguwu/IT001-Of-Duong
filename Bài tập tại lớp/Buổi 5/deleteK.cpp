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
    int p,k;
    cin >> p >> k;
    for (int i = p; i < n; i++){
        a[i] = a[i+k];
    }
    n = n - k;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}