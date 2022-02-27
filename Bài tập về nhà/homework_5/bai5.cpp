#include <iostream>
using namespace std;

void Nhap(float a[][100], int& m, int& n ){
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
}
void Tich(float a[][100], float b[][100], float c[][100], int m, int n, int p,int q){
    if( n == p )
	{
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < q; j++)
			{
				c[i][j] = 0;
				for(int k = 0; k < p; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}

		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < q; j++)
			{
				cout << c[i][j] << "  ";
			}
			cout << endl;
		}
	}
	else
	{
		cout<<"Khong chia duoc!";
	}

}

int main(){
    int m,n,p,q;
    float a[100][100],b[100][100],c[100][100];
    Nhap(a,m,n);
    Nhap(b,p,q);
    Tich(a,b,c,m,n,p,q);
}