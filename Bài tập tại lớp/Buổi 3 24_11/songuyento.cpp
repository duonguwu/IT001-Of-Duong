#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if (n == 1){
        cout << "-1";
    } else {
    if (count == 0){
        cout << "1";
    } else {
        cout << "0";
    } 
    if (n == 1){
        cout << "-1";
    }
}
}