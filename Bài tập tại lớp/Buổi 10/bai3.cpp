#include <iostream>
using namespace std;

void nhapmang(int a[], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void xuatMang(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
void tangdan(int a[], int n){
    int Mid;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                Mid=a[i];
                a[i]=a[j];
                a[j]=Mid;
            }
        }
}

int main (){
    int a[50],b[50],c[100],n,m,p;
    nhapmang(a,n);
    nhapmang(b,m);
    tangdan(a,n);
    tangdan(b,m);
    int i = 0, j = 0, cur = 0;
    while (i < n && j < m){
        if (a[i] <= b[j]){
            c[cur] = a[i];
            cur++;
            i++;
        } else {
            c[cur] = b[j];
            cur++;
            j++;
        }
    }
    while (i<n){
        c[cur] = a[i];
        cur++;
        i++;
    }
    while (j<m)
    {
        c[cur] = b[j];
        cur++;
        j++;
    }
    for(int i = 0; i < (m+n); i++){
        cout << c[i] << " ";
    }
    return 0;
}