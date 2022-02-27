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
    int max1 = 0;
    for (int i = 0; i < n; i++){
        if (max1 < a [i]){
            max1 = a[i];
        }
    }
    int max2 = 0;
    for (int i = 0; i < n; i++){
        if (max1 == a [i]);
        else if (max2 < a[i])
            max2 = a[i];       
    }
    if (max2 == max1){
        cout << 0;
    }
    else {
    cout << max2;
    }
}