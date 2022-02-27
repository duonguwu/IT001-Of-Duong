#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n,x;
   cin >> n >> x;
    double s1=0,s2=0,s3=1, a = 0, b=1;
    for (int i = 0; i <= n; i++){
        s1 += pow(x,i);
        a = i*2;
        s2 +=  pow(x,a);
    }
    
    for (int j = 1; j <= n; j++){
        b *= j;
        s3 += pow(x,j)/b;
    }
    
    cout << s1 << endl << s2 << endl << s3;
}