#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

// void chuyen(char c[]){
//     int s = 0,mu = 1;
//     for (int i = 0; i<2; i++){
//         s+= (c[i]-48)*pow(10,mu);
//         mu--;
//     }
    
//     if (c[9] == 'P'){
//         s+=12;
//         if (s >= 24) s-=12;
//     }
//     c[0] = s/10 +48;
//     c[1] = s%10 +48;
//     for (int i = 8; i <= 10; i++)
//         c[i] = '\0';
//     cout << c;
// }


// 02:12:38 PM
void chuyen(char c[]){
    int s = 0, mu = 1;
    for (int i = 0; i <2;i++){
        s += (c[i]-48)*pow(10,mu);
        mu--;
    }
    if(c[9] == 'P'){
        s+=12;
        if (s==24) s-=12;
    }
    c[0] = s/10 +48;
    c[1] = s%10 +48;
    for (int i = 8; i<10; i++ )
        c[i] = '\0';
    cout << c;
}

int main()
{
    char c[100];
    cin.getline(c,100);
    chuyen(c);
}
