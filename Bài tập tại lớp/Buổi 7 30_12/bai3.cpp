#include <iostream>
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
    for(int i = 0; i < n; i++){
        cout << "\n";
        for (int j = 0; j < m; j++) {
			cout << a[j][i] <<" ";
		}
        cout << "\n";
    }
    return 0;
}