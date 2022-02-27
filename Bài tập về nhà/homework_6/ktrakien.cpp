// #include <iostream>
// using namespace std;

// void nhapmang(int a[], int &n){
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }
// }

// void xuatMang(int a[], int n){
//     for (int i = 0; i < n; i++){
//         cout << a[i] << " ";
//     }
// }

// void tangdan(int a[], int n){
//     int Mid;
//     for(int i=0;i<n;i++)
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 Mid=a[i];
//                 a[i]=a[j];
//                 a[j]=Mid;
//             }
//         }

// }



// int main (){
//     int a[50],b[50],c[100],n,m,p;
//     nhapmang(a,n);
//     nhapmang(b,m);
//     tangdan(a,n);
//     tangdan(b,m);
//     int i = 0, j = 0, cur = 0;
//     while (i < n && j < m){
//         if (a[i] <= b[j]){
//             c[cur] = a[i];
//             cur++;
//             i++;
//         } else {
//             c[cur] = b[j];
//             cur++;
//             j++;
//         }
//     }
//     while (i<n){
//         c[cur] = a[i];
//         cur++;
//         i++;
//     }
//     while (j<m)
//     {
//         c[cur] = b[j];
//         cur++;
//         j++;
//     }
//     for(int i = 0; i < (m+n); i++){
//         cout << c[i] << " ";
//     }
//     return 0;
// }

//=====bai5==

//===========

// #include <iostream>
// #include <cmath>
// using namespace std;

// void nhapmang(int a[][100], int &n){
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++) {
// 			cin >> a[i][j];
// 		}
//     }
// }
// void xuat(int a[][100], int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++)
//         cout << a[i][j] << " ";
//     cout << endl;
//     }
// }
// int main(){
//     int a[100][100],n;
//     nhapmang(a,n);
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++)
//         if (a[i][j] % 2 != 0) a[i][j] = 0;
//     }
//     cout<<"Matrix: "<<endl;
//     xuat(a,n);
// }

////

// #include <iostream>
// using namespace std;

// long long Factorial (int n){
//     for(int i = 1; i <= n; i++){
//         giaiThua = giaiThua * i;
//     }
//     return giaiThua;
// }
// bool isFactorial (int n){
//     for (int i = 1; i <= n; i++){
//         if(Factorial)
//     }
// }


/////



//bai9

// #include <iostream>
// #include<cstring>

// using namespace std;

// int myStrlen(char s[], int k) {
//     int len = 0;
//     while(s[len] != '\0')
//     len++;
//     return len-k;
// };

// int DemSoKyTuDacBiet(char s[]){
//     int dem=0,k=0;
//     for (int i = 0; i < myStrlen(s,0);i++){
//         if (s[i] >=65 && s[i] <= 90) k++;
//         else if (s[i] >= 48 && s[i] <= 57) k++;
//         else if (s[i] >= 97 && s[i] <= 122) k++;
//         else dem++;
//     }
//     return dem;
// }

// int main()
// {
//     char s[256];
//     cin.getline(s,256);
//     cout<<DemSoKyTuDacBiet(s);
// //     return 0;
// // }


// /////////////////

// #include <iostream>
// #include<cstring>

// using namespace std;

// int myStrlen(char s[], int k) {
//     int len = 0;
//     while(s[len] != '\0')
//     len++;
//     return len-k;
// };

// // int SoSanhBangNhauTheoSo(char s1[], char s2[])
// // {   
// // 	int len1 = myStrlen(s1,0);
// //     int len2 = myStrlen(s2,0);
//     // for (int i=0; s1[i] != '\0'; ++i)
//     //     s1[i] = tolower(s1[i]);
//     // for (int i=0; s2[i] != '\0'; ++i)
//     //     s2[i] = tolower(s2[i]);
// //     if (len1 == len2){
// //         for (int i = 0; i < len1; i++) {
// //             if(s1[i] >= 48 && s1[i] <=57){
// //                 if(s2[i] >=48 && s2[i] <=57 ){
// //                     if (s1[i] == s2[i]) return 1;
// //                     else return 0;
// //                 } else return 0;
// //             }
// //         }
// //     } else return 0;
// // }

// int SoSanhBangNhauTheoSo(char s[],char t[])
// {
//     int n=strlen(s), m=strlen(t);
//     if(n!=m)
//         return 0;
//     for (int i=0; s[i] != '\0'; ++i)
//         s[i] = tolower(s[i]);
//     for (int i=0; t[i] != '\0'; ++i)
//         t[i] = tolower(t[i]);
//     for(int i=0;i<n;i++){
//         if(s[i]>=48&&s[i]<=57)
//             if(s[i]!=t[i])
//                 return 0;
//         else if((s[i]>=97&&s[i]<=122))
//         {   
//             if (t[i] < 97 && t[i] > 122) return 0;
//         }
//     }
//     return 1;
// }


// int main()
// {
//     char s[256], t[256];
//     cin.getline(s,256);
//     cin.getline(t,256);
//     cout<<SoSanhBangNhauTheoSo(s,t);//so giong nhau, cung la chu cai

//     return 0;
// }



////

//bai2 cjinh phuog


// #include <iostream>
// #include <cmath>
// using namespace std;

// int timcp(int n){
//     //flag = 1 => số chính phương
//     //flag = 0 => không phải số chính phương
//     int dem = 0;
//     int i = 0;
//     while(i <= n){
//         if( pow( i, 2) == n ) {   
//             dem = 1;
//             break;
//         }
//         i++;
//     }
//     return dem;
// }
// int main(){
//     int a[100],n;
//     cin >> n;
//     if (n<1) cout << "Mang rong.";
//     else{for (int i =0; i<n;i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++) cout << a[i] << " ";
//     cout << endl;
//     int dem = 0;
//     for (int i = 0; i < n; i++){
//         if (i%2!=0){
//             if(timcp(a[i]) == 1){ 
//                 dem++;
//             }
//         }
//     }
//     if (dem == 0) cout << "Mang khong chua so chinh phuong.";
//     else {
//         for (int i = 0; i < n; i++){
//         if (i%2!=0){
//             if(timcp(a[i]) == 1){ 
//                 cout << a[i] << " ";
//             }
//         }
//     }
//     cout << "\n" << dem;
//     }
// }
// }





///bai 12


#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct CB
{
    char mcb[35];
    char ngay[12];
    double time;
    char noiden[35];
};

void nhapDSChuyenBay(CB a[100], int &n){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin.ignore();
        cin.getline(a[i].mcb,35); 
        cin.getline(a[i].ngay,12);
        cin >> a[i].time;
        cin.getline(a[i].noiden,35);
}
}

int main()
{
    CB a[100];
    int n;

    nhapDSChuyenBay(a,n); // Nhap danh sach cac chuyen bay


    cout<<"Machuyen\t|Ngaybay\t|Giobay\t|Noiden\n";
    

    return 0;
}

