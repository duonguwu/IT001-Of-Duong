#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	int x;
	int y;
};


void NhapToaDo(DIEM &d, int &n)
{   
    for (int i = 0; i < n; i++){
	cout<<"Nhap Hoanh Do diem A" << i << ": "; cin>> d.x;
	cout<<"Nhap Tung Do diem A" << i << ": "; cin>> d.y;
    }
}

void XuatToaDo(DIEM &d){
    
	cout<< "(" << d.x << "," << d.y << ")" << endl;
    
}

int distance(DIEM d){
    int kc = sqrt(d.x*d.x+d.y*d.y);
    return kc;
}

int main (){
    int n,f;
    cout << "Nhap vao so n: ";
    cin >> n;
    cout << "Nhap truc y = ";
    cin >> f;
    DIEM d[n];
    NhapToaDo(d[n],n);
    int xa=0;
    for (int i = 0; i<n; i++){
        if(distance(d[xa]) <= distance(d[i]))
            xa = i;
    }
    cout << "Diem cach xa O nhat la: A" << xa << endl;
    int gan = 0;   
    for (int j = 0; j<n; j++){
        if(distance(d[gan]) > distance(d[j]))
            gan = j;
    }
    cout << "Diem gan O nhat la: A" << gan << endl;

    // for (int k = 0; k < n; k++){
    //     if (d[k].y == f){
    //         cout << "Diem nam tren truc y = " << f << " la: A" << k;     
    //     }
    // }
}