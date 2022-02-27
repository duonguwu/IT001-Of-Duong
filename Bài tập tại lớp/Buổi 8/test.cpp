#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int m,n,a[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    ofstream fo ("matran.txt");
    fo << n << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++)
            fo << a[i][j] << " ";
    fo << "\n";
    }
    fo.close();
    // ifstream fi("matran.txt");
    // for (int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++)
    //         fi << a[i][j] << " ";
    //     fi << "\n";
    // }
    
}