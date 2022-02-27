#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    double** a = new double* [m];
    for(int i = 0; i < m; i++){
        a[i] = new double[n];
    }
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }

    for(int i = 0; i < m; i++){
        
        for (int j = 0; j < n; j++) {
			cout << a[i][j] <<" ";
		}
        cout << "\n";
    }
}