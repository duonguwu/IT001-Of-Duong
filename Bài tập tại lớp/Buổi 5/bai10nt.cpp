#include <iostream>
#include <cmath>
using namespace std;

int songuyento(int n){
    if (n < 2)
        return 0;
    for(int i = 2; i <= sqrt(n); i++)
    
        if(n % i == 0)
        return 0;
    return 1;
}

void NhapmangSNT(int a[], int &n){
    cin >> n;
    int dem = 0;
    for (int i = 0; dem < n; i++){
        if (songuyento(i)){
            a[dem]=i;
            dem++;
        }
    }
}

int SoPhanTuChuaY(int a[], int n, int y){
    int d = 0;
    for (int i = 0; i < n; i++){
        while (a[i] > 0)
        {
            if(a[i]%10 == y){
                d++;
                break;
            }
            a[i] /= 10;
        }
    }
    return d;
}

int main (){
    int y,n, a[1000];
    cin >> y;
    nhapmangSNT(a, n);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
 
    cout << "\n" << SoPhanTuChuaY(a, n, y);
}
