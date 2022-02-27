#include <iostream>
using namespace std;
#define MAX 100


void Nhapmang(int a[], int &n){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}

bool isBenford(int a[], int n){
    int dem1 = 0, dem4 = 0, d = 0;
    for (int i = 0; i < n; i++){
        while (a[i] >= 10){
            a[i] /= 10;         
        }
        d = a[i];
        if (d == 1){
            dem1++;
        } else if (d == 4) {
            dem4++;
        }
    }
    if (dem1 == 3 && dem4 == 1){
        return true;
    } else {
        return false;
    }
}



int main()
{
	int a[MAX], n = 10;
	Nhapmang(a, n);
	if (isBenford(a, n) == true)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}




// int main (){
//     long long a[5],d=0, dem1 = 0, dem4 = 0;
//     nhapmang(a);
//     for (int i = 0; i < 5; i++){
//         while (a[i] >= 10){
//             a[i] /= 10;         
//         }
//         d = a[i];
//         if (d == 1){
//             dem1++;
//         } else if (d == 4) {
//             dem4++;
//         }
//     }
//     if (dem1 == 3 && dem4 == 1){
//         cout << "TRUE";
//     } else {
//         cout << "FALSE";
//     }
    
// }