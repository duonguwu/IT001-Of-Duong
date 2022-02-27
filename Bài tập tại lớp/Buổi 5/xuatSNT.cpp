#include <iostream>
#include <cmath>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int songuyento(int n){
    if (n < 2)
        return 0;
    for(int i = 2; i <= sqrt(n); i++)
    
        if(n % i == 0)
        return 0;
    return 1;
}


int main (){
    int a[1000], n;
    int d = 0;

    nhapmang(a,n);
    for(int i=0;i<n;i++){

        if(songuyento(a[i])){
            cout << a[i] << " ";
            d++;
        }
    }
    if (d == 0){
            cout << "0";
    }
    
}