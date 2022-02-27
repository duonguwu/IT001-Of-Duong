#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
    double a;
    cin >> a;
    cout << "Chu vi: " << setprecision(2)<< fixed << (double)a*4 << endl;
    cout << "Dien tich: " << setprecision(2)<< fixed << (double) a*a;
}