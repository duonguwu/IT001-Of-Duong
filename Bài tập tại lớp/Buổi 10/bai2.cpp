#include <iostream>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int main(){
    int a[1000],n;
    nhapmang(a,n);
    int max1 = 0;
    for (int i = 0; i < n; i++){
        if (max1 < a [i]){
            max1 = a[i];
        }
    }
    cout << max1 << endl;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == max1) dem++;
    }
    cout << dem;
}