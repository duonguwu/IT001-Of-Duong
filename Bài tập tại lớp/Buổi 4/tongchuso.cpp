#include <iostream>


using  namespace std;
int input(int& n){
    cin >> n;
    return n;
}
void sum(int& n, int& s){

    while (n >0  ){
        s = s + n%10;
        n = n /10;
    }

}



int main() {
    int n, s=0;
    input(n);
    sum(n, s);
    cout << s;
}
