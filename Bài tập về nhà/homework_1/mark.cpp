#include <iostream>
#include <math.h>>
#include <iomanip>

using namespace std;

int main () {
    double a, dlt;
    int n;
    cin >> a >> n;
    cout.precision(10);
    double clt = a * n;
    dlt = round(clt);
    cout << dlt / n;
    return 0;
}