#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// int main(){
//    int n;
//    double pi = 0;
//    cin>>n;
//    for( int i = 0; i <= n; i++)
//    {pi = pi + pow(-1,i)/(2*i+1);}
//    cout<<4*pi;
// return 0;
// }

int main (){
   double x , n;
   cin >> x >> n;
   double s = 0;
   for (int i = 1; i <= n; i++){
      s = s + pow(-1,i+1)*pow(x,i)/i;
   }
   cout << setprecision(30)<< fixed <<s;
}