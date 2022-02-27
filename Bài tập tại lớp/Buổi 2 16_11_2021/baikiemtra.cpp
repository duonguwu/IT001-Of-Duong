#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main (){
    int n,k,p,q,A,B,u,v;
    cin >> n >> k >> p >> q;
    A = (p-1)*2 + (q-1);
    B = (A-k < 0) ? A+k : A-k;

    if (B >= n){
        cout << "-1";
    } else{
        u = B / 2 + 1;
        v = B % 2 + 1;
        cout << u << " " << v;
    }
}