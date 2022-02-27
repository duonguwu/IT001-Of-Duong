#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int ptb2(int a, int b, int c){

    double denta = 1.0*b*b - 4.0*a*c;
    double x1 = (-b + sqrt(denta))/(2.0*a), x2 = (-b - sqrt(denta))/(2.0*a);
    if (denta < 0){
        cout << "PTVN";
    } else if (denta == 0){
        cout << "PT co nghiem kep: " << "x1 = x2 = " << x1;
    } else {
        cout << "PT co hai nghiem phan biet: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }
}

int main (){
    long int a,b,c;
    cin >> a >> b >> c;
    ptb2(a,b,c);
    return 0;
}