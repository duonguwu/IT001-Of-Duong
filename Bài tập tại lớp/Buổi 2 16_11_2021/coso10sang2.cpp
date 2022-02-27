#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main (){
    long csm,csh,i=1,sum=0;
    cout << "Nhap vao so A dang co so 10: ";
    cin >> csm;
    while (csm > 0){
        csh = csm%2;
        sum = sum + (i*csh);
        csm = csm/2;
        i=i*10;
    }
    cout << "\nSo A sau khi chuyen sang co so 2: " << sum;
    return 0;
}