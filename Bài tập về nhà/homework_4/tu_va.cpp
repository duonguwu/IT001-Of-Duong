#include <iostream>
using namespace std;

int main(){
    int n,d,sua=0;
    cin >> n >> d;
    int* a = new int [n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int dem = 0;
    for (int i = 0; i<n; i++){
        if (a[i] == 0){
            dem++;
        } else dem = 0;
        if(dem == d){
            sua++;
            dem = 0;
        }
    }
    cout << sua;
}