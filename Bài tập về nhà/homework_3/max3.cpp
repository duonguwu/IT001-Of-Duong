#include <iostream>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int maxMang(int a[], int n){
    int max = 0;
    if(n == 1){
        max = a[0];
    }
    else if (n <= 0){
        return 0;
    } 
    else {
    for (int i = 0; i < n; i++){
        if (max < a[i]){
            max = a[i];
        }
    }
    return max;
    }
}

int main(){
    int a[100],n;
    int d = 0;
    nhapmang(a,n);
    if (maxMang(a,n)){
    cout << maxMang(a,n) << endl;
    
    for (int i = 0; i < n; i++){
        if (a[i] == maxMang(a,n)){
            d++;
        }
    }
    
    cout << d;
    }
}