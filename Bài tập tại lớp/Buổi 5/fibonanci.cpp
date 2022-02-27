
#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x>=1 && x <=30){
        cout << Fibo(x);
    } else {
        cout << "So " << x << " khong nam trong khoang [1,30].";
    }
}

int Fibo(int x){
	if (x == 0) return 0;
	if (x == 1) return 1;
	return Fibo(x-1) + Fibo(x-2);
}
