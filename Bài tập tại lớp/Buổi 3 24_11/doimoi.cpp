#include <iostream>
#include <cmath>
using namespace std;

long long a,k,b,m,n,fs,last,t,mid,ntree;
int main (){
    cin >> a >> k >> b >> m >> n;
    fs = 1;
    last = pow(10,18);
    t = 1;
    while (fs <= last){
        mid = fs + (last - fs)/2;
        ntree = (t - t/k)*a + ( t - t/m)*b;
        if ( t>=n){
            t = mid; 
            last = mid - 1;
        } else {
            fs = mid + 1;
        }
    }
    cout << t;
}