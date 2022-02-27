// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     int f0 = 0;
//     int f1 = 1;
//     int fn = 1;
//     int i;
 
//     if (n < 0) {
//         return -1;
//     } else if (n == 0 || n == 1) {
//         return n;
//     } else {
//         for (i = 2; i < n; i++) {
//             f0 = f1;
//             f1 = fn;
//             fn = f0 + f1;
//         }
//     }
//     return fn;
// }

// int main(){
//     int n;
//     cin >> n;
//     double** a = new double* [n];   
//     for( int i = 0; i < n; i++){
//         a[i] = new double[n];
//     }
//     for(int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++) {
// 			cout << fibonacci(i+j+1) << " ";
// 		}
//         cout << "\n";
//     }
// }



#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

void Nhapmang(int a[][MAX], int &n){
    cin >> n;
}
int fibonacci(int n) {
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

void Xuatmang(int a[][MAX], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
			cout << fibonacci(i+j+1) << " ";
		}
        cout << "\n";
    }
}
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}