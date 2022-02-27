#include <iostream>
using namespace std;

int main (){
    long a,b,n;
    cin >> a >> b;
    cin >> n;

    long s=0,i=1;
    while (i<=n) {
        s = s + a*b;
        a++;
        b++;
        i++;
    } 
    cout << s;
}