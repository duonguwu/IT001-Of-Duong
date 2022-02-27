#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300


int main(){
    int dem = 0,n=0;
    char s[MAX];
    cin.getline(s,300);
    while(s[n] != '\0'){
      n++;
    }
    for (int i = 0; i < n; i++)
        for (int j = 48; j <= 57; j++){
            if (s[i] == j) dem++;
        }
    if (dem > 0) cout << "CHUOI KHONG HOP LE.";
    else puts(s);
}