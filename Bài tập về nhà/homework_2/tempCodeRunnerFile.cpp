#include <iostream>
using namespace std;

int main (){
    long long n;
    int i, sum = 0;
    cin >> n;
    
    for (i = 1; i < n; i++){
        if (n%i==0){
            sum += i;
        }
    }
}