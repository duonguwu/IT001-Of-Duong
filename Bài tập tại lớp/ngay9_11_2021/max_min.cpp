#include <iostream>
using namespace std;

int main () {
    int a,b;
    cin >> a;
    cin >> b;
    int max = (a > b)? a :b;
    int min = (a < b) ? a:b;
    cout << "max = " << max << endl;
    cout << "min = " << min;
}