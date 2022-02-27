#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	double x;
	double y;
};


void NhapToaDo(DIEM &d)
{   
    
	cin>> d.x;
	cin>> d.y;
    
}

void XuatToaDo(DIEM &d){
    
	cout<< "(" << d.x << "," << d.y << ")" << endl;
    
}

double distance(DIEM d){
    double kc = sqrt(d.x*d.x+d.y*d.y);
    return kc;
}

int main (){
    int n;
    double f;
    cout << "Nhap vao so diem can xet: ";
    cin >> n;
    cout << "Nhap truc y0 = ";
    cin >> f;

    DIEM d[n];
    for (int i = 0; i < n; i++){
        cout << "Nhap tung do x va hoanh do y cua diem A" << i << ": ";
        NhapToaDo(d[i]);
    }
    int xa = 0;
    for (int i = 0; i<n; i++){
        if(distance(d[xa]) <= distance(d[i]))
            xa = i;
    }
    cout << "Diem cach xa O nhat la: A" << xa;
    XuatToaDo(d[xa]);
    int gan = 0;
    for (int j = 0; j<n; j++){
        if(distance(d[gan]) > distance(d[j]))
            gan = j;
    }
    cout << "Diem gan O nhat la: A" << gan;
    XuatToaDo(d[gan]);
    for (int k = 0; k < n; k++){
        if (d[k].y == f){
            cout << "Diem nam tren truc y0 = " << f << " la: A" << k; 
            XuatToaDo(d[k]); 
        }
    }
}