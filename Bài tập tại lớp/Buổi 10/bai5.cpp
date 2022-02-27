#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int MAX = 254;
    char *s1,*s2,*s;
    s1 = new char (MAX);
    s2 = new char (MAX);
    s  = new char (MAX);
    cin.getline(s1, MAX);
    cin.getline(s2, MAX);
    int k = strlen(s1);
    for (int i = 0; i < k; i++){
        s[i] = s1[i];
    }
    int m;
    // if (k+strlen(s2) > 254) m = 254; 
    // else m = strlen(s2);
    for (int i = k; i < m; i++){
        for (int j = 0; j < strlen(s2); j++)
            s[i] = s2[j];
    }
    cout << s;
}