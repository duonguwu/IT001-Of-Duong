// #include <iostream>
// #include <string.h>
// using namespace std;
// #define MAX 300

// void ChenChuoiTaiVitriK(char s[], char s1[], int k);
// void Chuanhoa(char s[]);
// int myStrlen(char s[], int k);
// bool myStrcat(char s[], char s1[], char s2[]);
// void myStrcpy(char s[], int vt, char s1[], int k);
// int myStrstr(char s[], char s1[]);
// int myStrlen(char s[], int k)
// {
//     int dem;
//   for(int i=0;s[i]!='\0';i++)
//     dem++;
//   return dem-k;
// }
// void myStrcpy(char s[], int vt, char s1[], int k)
// {
//     int length =myStrlen(s,0);
//     for(int i=0;i<=length;i++)
//         s[i]=s1[i];
// }
// void Xoa1kitu(char s[], int k)
// {
//     for(int i=k;s[i]!='\0';i++)
//     {
//         s[i]=s[i+1];
//     }
// }
// void Chuanhoa(char s[])
// {
//     while(s[myStrlen(s,0)-1]==' ')
//     {
//         Xoa1kitu(s,myStrlen(s,0)-1);
//     }
//    for(int i=0;s[i]!='\0';i++)
//    {
//      if(s[i]=='.' && s[i-1]==' ')
//      {
//          Xoa1kitu(s,i-1);
//         i=i-2;
//      }
//      if(s[i]=='.' && s[i+1]!='\0' && s[i+1]==' ' && s[i+2]==' ')
//      {
//          Xoa1kitu(s,i+2);
//          i=i-2;
//      }
//    }
// }
// int main()
// {
// 	char s[MAX];

// 	fflush(stdin);
// 	cin.getline(s, MAX);

// 	char s1[MAX];
// 	myStrcpy(s1, 0, s, 0);
// 	Chuanhoa(s1);
// 	cout << s << endl << s1 << endl;
// 	return 0;
// }


#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);
int myStrlen(char s[], int k)
{
    int dem;
  for(int i=0;s[i]!='\0';i++)
    dem++;
  return dem-k;
}
void myStrcpy(char s[], int vt, char s1[], int k)
{
    int length =myStrlen(s,0);
    for(int i=0;i<=length;i++)
        s1[i]=s[i];
}
void Xoa1kitu(char s[], int k)
{
    for(int i=k;s[i]!='\0';i++)
    {
        s[i]=s[i+1];
    }
}
void Chuanhoa(char s[])
{
    while(s[myStrlen(s,0)-1]==' ')
    {
        Xoa1kitu(s,myStrlen(s,0)-1);
    }
   for(int i=0;s[i]!='\0';i++)
   {
     if(s[i]=='.' && s[i-1]==' ')
     {
         Xoa1kitu(s,i-1);
        i=i-2;
     }
     if(s[i]=='.' && s[i+1]!='\0' && s[i+1]==' ' && s[i+2]==' ')
     {
         Xoa1kitu(s,i+2);
         i=i-2;
     }
   }
}
int main()
{
	char s[MAX];
    cin.getline(s,MAX);

	//fflush(stdin);
	//cin.getline(s, MAX);

	//char s1[MAX];
	//myStrcpy(s1, 0, s, 0);
	//Chuanhoa(s1);
	//cout << s << endl << s1 << endl;
	Chuanhoa(s);
	cout<<s;
	return 0;
}