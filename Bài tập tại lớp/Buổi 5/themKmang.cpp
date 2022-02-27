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
    int x,k;
    cin >> x >> k;
    n++;
    for (int i = n-1; i > k; i--){
        a[i] = a[i-1];
    }
        a[k] = x;
    
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}