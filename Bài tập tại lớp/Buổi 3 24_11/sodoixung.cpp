#include <iostream>
using namespace std;

int main (){
    int a;
    cin >> a;
    int t = a;
    int dn = 0;

    while (t>0){
        int sc=t%10;
        dn = dn*10 +sc;
        t = t / 10;
    }
    if (dn == a){
        cout << "true";
    } else {
        cout << "false";
    }
}