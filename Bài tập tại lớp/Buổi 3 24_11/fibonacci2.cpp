#include <iostream>
using namespace std;

int fibonacci(int n){
    int a0 = 0;
    int a1 = 1;
    int an = 1;
    int i=3;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        while(i < n) {
            a0 = a1;
            a1 = an;
            an = a0 + a1;
            i++;
        }
    }

    return an;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
       if (fibonacci(i)<n && fibonacci(i) > 0){
            cout << fibonacci(i) << " ";
       }
    }
}