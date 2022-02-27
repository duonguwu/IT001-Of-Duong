
#include <iostream>
#include <iomanip>
using namespace std;

#include <cmath>
double calculate(int n){
    if (n == 0){
        return 0;
    } else {
        return sqrt(n+calculate(n-1));
    }
}




int main() {
	int n;
	cin >> n;
    cout <<fixed<<setprecision(2)<< calculate(n);
    return 0;
}
