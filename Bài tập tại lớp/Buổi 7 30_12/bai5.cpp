#include <iostream>
using namespace std;


int main(){
    int m,n,l,k;
    cin >> m >> n;
    float** a = new float* [m];
    for(int i = 0; i < m; i++){
        a[i] = new float[n];
    }
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
    cin >> l >> k;
    float** b = new float* [l];
    for(int i = 0; i < l; i++){
        b[i] = new float[k];
    }
    for(int i = 0; i < l; i++){
        for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
    }
    float** c = new float* [l];
    for(int i = 0; i < l; i++){
        c[i] = new float[k];
    }

    if (n == k || l == m){
        for(int i = 0; i < m; i++){
            for (int j = 0; j < n; j++) {
                c[i][j] = a[i][j] + b[i][j];
		    }
        }   
    } else {return 0;}
    for(int i = 0; i < m; i++){
        cout << "\n";
        for (int j = 0; j < n; j++) {
			cout << c[i][j] << " ";
		}
    }
}