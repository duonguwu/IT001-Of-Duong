#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
    int a, b,c;
    double p;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    cout << setprecision(2)<< fixed <<(double) sqrt(p*(p-a)*(p-b)*(p-c));
}