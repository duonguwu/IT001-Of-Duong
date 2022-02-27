#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << "What is the outdoor temperature?" << endl;
    int a;
    cin >> a;
    cout << "What is your plan today?" << endl;
    if (a >= 33){
        cout << "Good day for swimming";
    }
    else if (a >= 24 && a < 33){
        cout << "Good day for golfing";
    }
    else if (a >= 10 && a < 24){
        cout << "Good day to play tennis";
    }    
    else if (a < 10){
        cout << "Good to bed";
    } 
}