#include <iostream>
#include <math.h>>
#include <iomanip>

using namespace std;

int main () {
    long int n;
    int d,r;
    cin >> d >> r  >> n;
    cout << (n*2)*r + (n-1)*d;
}