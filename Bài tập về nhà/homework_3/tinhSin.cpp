#include <iostream>
#include <iomanip>
using namespace std;

double ham(double x, int n){
    int a;
    if (n%2==0)
        a = 1;
    else 
        a = -1;
    
    float temp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
        temp = temp * x / i;
    return a * temp;
}

int main(){
    double x,s;
    cin >> x;
    int n=0;
    for (int i = 1; i <= 2*n+1; i++)
    if(ham(x, n) > 0){
        while (ham(x, n) > 0.00001)
        {
            s += ham(x,n);
            n++;
        }
    } else {
        while (ham(x, n)*(-1) > 0.00001)
        {
            s += ham(x,n);
            n++;
        }
        
    }
    cout << setprecision(4) << fixed << s;
}

