// Kiểm tra ma trận trên có phải là ma trận đơn vị không?

#include <iostream>
#include <iomanip>
// using namespace std;
#define MAXR 100
#define  MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &n){
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
			std::cin >> a[i][j];
		}
    }
}
bool isMaTranDonVi(int a[MAXR][MAXC], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && a[i][j] != 0) return false;
            if (i == j && a[i][j] != 1) return false;
        }
    }
    return true;
}

int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout <<  std::boolalpha << isMaTranDonVi(a, n);
    return 0;
}
