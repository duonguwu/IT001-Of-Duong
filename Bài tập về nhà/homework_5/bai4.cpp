#include <iostream>
#include <iomanip>
using namespace std;

void NhapMaTran(double a[][100], int &n){
    cin >> n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
}
bool ktra(double a[][100], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == j && a[i][j] != 1) return false;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j][i]!=0){
                dem++;
                if(dem>1)
                    return 0;
                break;
            }
        }
        for(int j=i-1;j>=0;j--){
        if(a[j][i]!=0)
        return false;
        }
        
    }
    return true;
}
           
int main(){
    int n;
    double a[100][100];
    NhapMaTran(a,n);
    if (ktra(a,n)){
        cout << "Yes";
    } else cout << "No";
    return 0;
}

// int ktra(double a[][MAX], int n)
// {
//     int dem=0;
//     for(int i=0;i<n;i++)
//         if(a[i][i]!=1)
//         return 0;
//     for(int i=0;i<n-1;i++)
//         for(int j=i+1;j<n;j++)
    // {
    //     if(a[j][i]!=0)
    //     {
    //         dem++;
    //         if(dem>1)
    //             return 0;
    //         break;
    //     }
    // }
//     for(int i=0;i<n;i++){
//         for(int j=i-1;j>=0;j--)
//         if(a[j][i]!=0)
//         return 0;
//     }
//     return 1;

// }