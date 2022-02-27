#include <iostream>
#include <cmath>
using namespace std; 

int main () {
    int n,sc,sum=0;
    cin >> n;
    int t = n;
    while (t>0){
        sc = t%10;
        t = t /10;
        sum = sum + sc;
    }
    cout << sum;
}