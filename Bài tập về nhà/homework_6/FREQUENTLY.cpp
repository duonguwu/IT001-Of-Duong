
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], const char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	cin.getline(s, MAX);	//Nhap chuoi s	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}

int myStrlen(char s[], int k) {
    int len = 0;
    while(s[len] != '\0')
    len++;
    return len-k;
};

int myStrcmp(char s1[], const char s2[])
{
    int dem=0;
    for(int i=0;i<myStrlen(s1,0);i++){
        if(s1[i]!=' '&&s1[i]!='/0'){
            dem++;
        }
    }
    if (dem == 0){ return 0;}
    else return 1;
}

void DemKyTu(char s[]){
    int n = myStrlen(s,0);
    for (int i = 0; i < n; i++){
        if (s[i] != '\0'){
            int dem = 0;
            for (int j = 0; j < i; j++){
                if (s[i] == s[j])
                dem++;
            }
            if (dem == 0){
                for (int j = i; j < n; j++){
                    if (s[i] == s[j]) dem++;
                }
            cout << s[i] << ": "<< dem << endl;
            }
        }
    }
}


// void DemKyTu(char s[])
// {
//     int n=myStrlen(s,0);
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]!='\0')
//         {
//         int dem=0;
//         for(int j=0;j<i;j++)
//             if(s[i]==s[j])
//             dem++;
//         if(dem==0){
//             for(int j=i;j<n;j++)
//         {
//             if(s[i]==s[j])
//                 dem++;
//         }
//          cout<<s[i]<<": "<<dem<<endl;
//         }
//         }
//     }
// }
