#include <iostream>
#include <math.h>>
#include <iomanip>

using namespace std;

int ptbacnhat(int a, int b){
    if (a==0){
        if (b == 0){
            cout << "ℝ";
        } else {
            cout << "Ø";
        }
    } else {
        cout << "{" << (double)-b/a << "}";
    }
}


int main (){
    double a,b;
    cin >> a >> b;
    ptbacnhat(a, b);
}