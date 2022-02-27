#include <iostream>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
}

int main (){
    int a[100], n;
    nhapmang(a,n);
    for (int i = 0; i < n; i++){
        if (i % 2 == 1){
            cout << a[i] << " ";
        }
    }

}