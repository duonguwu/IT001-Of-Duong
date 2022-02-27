#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char s[300];
    int n;
    int demso = 0, demchu = 0;
    cin.getline(s,300);
    while(s[n] != '\0'){
      n++;
    }
    for (int i = 0; i < n; i++){
        for (int j = 48; j <= 57; j++){
            if (s[i] == j) demso++;
        }
        for (int j = 65; j <= 90; j++){
            if (s[i] == j) demchu++;
        }
        for (int j = 97; j <= 122; j++){
            if (s[i] == j) demchu++;
        }
    }
    cout << demchu << " " << demso;
}