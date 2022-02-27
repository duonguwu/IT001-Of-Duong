#include <iostream>
using namespace std;

void Nhap(int a[][10], int& m, int& n ){
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
    }
}

int main()
{
	int a[10][10], b[10][10],c[10][10];
	int x,y,i,j,m,n;
    Nhap(a,x,y);
    Nhap(b,m,n);

	cout <<"\nMa tran A: " << endl;

	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}

	cout <<"\nMa tran B: " << endl;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << b[i][j] << "  ";
		}
		cout << endl;
	}

	cout << "Ket qua: "<< endl;
	if(y == m)
	{
		for(i = 0; i < x; i++)
		{
			for(j = 0; j < n; j++)
			{
				c[i][j] = 0;
				for(int k = 0; k < m; k++)
				{
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}

		for(i = 0; i < x; i++)
		{
			for(j = 0; j < n; j++)
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
	return 0;
}