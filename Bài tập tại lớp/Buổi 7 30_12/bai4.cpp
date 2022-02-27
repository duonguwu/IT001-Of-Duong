#include <iostream>
#include <iomanip>
using namespace std;

int kt(double* a[], int m, int n){
    if (m!=n) return 0;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if (a[i][j]!=a[j][i])
                return 0;
    return 1;
}

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
    if(kt(a,m,n) == 0){
        cout << "No";
    } else cout << "Yes";
}