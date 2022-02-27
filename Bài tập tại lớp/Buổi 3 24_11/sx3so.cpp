#include<iostream>

using namespace std;

int main(){
    double a,b,c,d;
    cin >> a >> b >> c;
    if (b<a) {
        d = a;
        a = b;
        b = d;
    }
    else if (c < b){
        d = b;
        b = c;
        c = d;
    }
    else 
}