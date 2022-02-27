#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n;
    cin >> n;
    double s1=0,s2=0,s3=0, a = 1, b=0;
    for (int i = 1; i <= n; i++){
        s1 = s1 + pow(i,i);
        a = a*i;
        s2 = s2 + a;
        b = b + i;
        s3 = s3 + 1/(b);
    }
    cout << s1 << endl << s2 << endl << s3;

}