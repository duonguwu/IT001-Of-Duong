#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for (auto &x: c)
        cin >> x;
    sort(c.rbegin(), c.rend());
    int i;
    for ( i = 0; i < n-1; i++){
        if (c[i] <= i){
            break;
        }
    }
    cout << i;
}