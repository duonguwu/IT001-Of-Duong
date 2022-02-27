/*#include <iostream>

using namespace std;

int main () {
    long long n,m;
    cin >> n >> m;
    int s=0;
    for (int i = 1; i < n || (i + 1) < m; i++){
        for (int = )
        s+= (n-i)+(m-1-i);
    }
    cout << s;
}*/
#include <iostream>

using namespace std;

/*int main() {
	long int n,m,a,b,c, dem = 0;
	cin >> n >> m;
	if (n == 1 || m == 1) return 0;
	a = max(m, n); b = min(m, n), c = abs(m - n);
	dem += b * (b - 1) / 2 + (a - 1) * (a - 2) / 2 - c * (c - 1) / 2;
	cout << dem;
	return 0;
}*/
int main () {
    int n,m;
    cin >> n >> m;
    cout << (n-1)*(m-1);
}