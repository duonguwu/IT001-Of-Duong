#include <iostream>
#include <cmath>
using namespace std; 

int main () {
    int n,sum,r,sume;
    cin >> n;
    int cap = 0;
    for (int i = 1; i < n; i++){
        sum = 0;
        for (int j = 2; j <= sqrt(i); j++){
        if (i % j == 0){
            sum++;
        }
        }
        if (sum == 0 && i > 2){
            if (i-r==2){
                cout << r << ", " <<i<< endl;
                cap++;
            }
            r=i;
        }
        sum=0;
    }
    cout << "Tong: "<< cap << " cap so sinh doi < " << n;
}
