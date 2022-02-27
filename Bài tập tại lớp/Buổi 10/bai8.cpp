#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    double **a = new double*[m];
    for(int i = 0; i < m; i++){
        a[i] = new double[n];
    }
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
    int j = 0
    double max = a[0][j];

    do{
    for (int i = 0; i < n; i++){
        if (a[i][j] > max) max = a[i][j];
    }
    cout << "Gia tri lon nhat tren cot " << j << " la:" << max << endl;
    j++;
    } while (j <= m);
}