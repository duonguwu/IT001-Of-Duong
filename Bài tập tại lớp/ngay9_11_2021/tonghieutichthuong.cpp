#include <iostream>
#include <iomanip>

using namespace std;
int main(){
 int a, b;
 cin >> a;
 cin >> b;
 cout << a << " + " << b << " = "<< a + b << endl;
 cout << a << " - " << b << " = "<< a - b << endl;
 cout << a << " x "<< b << " = "<< a*b << endl;
 cout << a << " : " << b << " = "<< setprecision(2)<< fixed << (double) a / b << endl;
 return 0;
}