#include<iostream>

using namespace std;

int main(){
    long double a,b,c,d;
    cin >> a >> b >> c;
    /*if (a == b && b == c){
        cout << a << " " << a << " " << a; 
    }*/
    if ( a >= b && a >= c){
        if (b>c){
            cout << c << " " << b << " " << a;
        }
        else {
            cout << b << " " << c << " " << a;
        }
    }
    else if ( b >= c && b >= a){
        if (a>c){
            cout << c << " " << a << " " << b;
        }
        else {
            cout << a << " " << c << " " << b;
        }
    }
    else if ( c >= b && c >= a){
        if (b>a){
            cout << a << " " << b << " " << c;
        }
        else {
            cout << b << " " << a << " " << c;
        }
    }
}