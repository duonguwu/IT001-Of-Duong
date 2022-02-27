#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int a;
    char b;
    cin >> a >> b;
    if (a>= 21){
        if (b == 'm'|| b == 'M'){
            cout << "1";
        }
        else if (b == 'f' || b == 'F'){
            cout << "2";
        } else{
            cout << "I do not know why";
        }
    }
    if (a < 21){
        if (b == 'm'|| b == 'M' ){
            cout << "3";
        }
        else if (b == 'f' || b == 'F' ){
            cout << "4";
        } else{
            cout << "I do not know why";
        }
    } 
}