#include <iostream>


using namespace std;

int _reverse(int n, int res = 0){
    
    if (n == 0){
        return res;
    } else {
        return _reverse(n/10, res*10 + n%10);
    }
}

int reverse(int n){
    return _reverse(n);
}


int main() {
    int n;
    cin >> n;
    cout << reverse(n);
}
