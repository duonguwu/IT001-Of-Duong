#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);


int main()
{
	char s[MAX];
	cin.getline(s, MAX);

	Chuanhoa(s);
	cout << s << endl;
	return 0;
}
int myStrlen(char s[], int k)
{
    int n=0;
    while(s[n]!='\0')
        n++;
    return n;
}
void myStrcpy(char s[], int vt, char s1[], int k)
{
    int n=0;
    while(s1[n]!='\0')
    {
        s[n]=s1[n];
        n++;
    }
    s[n]='\0';
}
void Chuanhoa(char s[])
{
    int n=myStrlen(s,0);
    for(int i=0;i<n;i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
        {
            for(int j=i;j<n;j++)
            {
                s[j]=s[j+1];
            }
            i--;
            n--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==' '&&s[i+1]=='.')
            {
            for(int j=i;j<n;j++)
            s[j]=s[j+1];
            n--;
            }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.'&&s[i+1]!=' ')
        {
            n++;
            for(int j=n-1;j>i+1;j--)
                s[j]=s[j-1];
            s[i+1]=' ';
        }
        s[n]='\0';
    }
}
