#include <iostream>
using namespace std;
int modulo(int m, int n){
    int a = m - n;
    if (a<n){
        return a;
    } else {
        return modulo(a, n);
    }


}


int main (){
    int m, n; cin >> m >> n;
	cout << modulo(m, n);
}