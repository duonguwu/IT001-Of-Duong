#include <iostream>
#include <string.h>
using  namespace std;

int hongbeoi(char s[]){
    int len = strlen(s);
    int dem = 0;
    if (len < 8) dem = -1;
    for (int i = 0; i < len; i++){
    if (s[i] == 46 || s[i] == 47 || s[i] == 92 || s[i] == 44 || s[i] == 32) dem=-2;
    }
    return dem;
}

void Score(char s[]){
    int len = strlen(s);
    int score,hieu=0,demhoa=0,demth=0,demso=0,demkt = 0,combo=0,fllower=0,flnum=0;
    for (int i = 0; i < len; i++){
        if (s[i] >= 65 && s[i] <= 90) demhoa++;
        if (s[i] >= 97 && s[i] <= 122) demth++;
        if (s[i] >= 48 && s[i] <= 57) demso++;
        if (s[i] == 33 ) demkt++;
        if (s[i] >34 && s[i] < 39) demkt++;
        if (s[i] >62 && s[i] < 65) demkt++;
        if (s[i] == 94 || s[i] == 95 ) demkt++;
        if (s[i] == 126 ) demkt++;
        if (s[i] == 42 ) demkt++;
    }
    if (demhoa > 0 && demkt > 0 && demso > 0) combo = 25;
    else if(demhoa > 0 && demkt > 0 || demhoa > 0 && demso > 0 || demkt > 0 && demso > 0) combo = 15;
    else combo = 0;

    if(demhoa == 0) fllower = -15;
    else fllower = 0;

    if (demhoa == 0 && demkt == 0 && demth == 0) flnum = -35;
    else flnum = 0;
    hieu = len - 8;
    score = 40 + (3*hieu) + (demhoa*4) + (demso*5) + (demkt*5) + combo + fllower + flnum;
    if (score < 50) cout << "Yeu";
    else if (score >=50 && score <= 75) cout << "Vua";
    else if (score >=75 && score < 100) cout << "Manh";
    else cout << "RatManh";
}

int main(){
    char s[100];
    cin.getline(s,100);
    if (hongbeoi(s) < 0) cout << "KhongHopLe";
    else Score(s);
}