#include <iostream>
using namespace std;

int largest_input(){
    int x;
    cin >> x;
    if (x==0) return 0;
    int y = largest_input();

    if (x > y) return x;
    return y;
}
int main(){
	cout << largest_input();
}
