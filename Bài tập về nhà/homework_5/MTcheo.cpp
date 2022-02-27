// Kiểm tra ma trận chéo
#include <iostream>
#include <iomanip>
using namespace std;
#define MAXR 100
#define  MAXC 100

void NhapMaTran(double a[MAXR][MAXC], int &n){
    cin >> n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
}
bool isMaTranDonVi(double a[MAXR][MAXC], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && a[i][j] != 0) return false;
        }
    }
    return true;
}

int main() {
    double a[MAXR][MAXC];
    int n;
    NhapMaTran(a, n);
    if(isMaTranDonVi(a,n)){
        cout << "Yes";
    } else cout << "No";
    return 0;
}
