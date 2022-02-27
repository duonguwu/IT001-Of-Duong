
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s, MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k){
    int len = 0;
    while(s[len] != '\0')
    len++;
    return len-k;
};

int myStrcmp(char s1[], char s2[])
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

void dn(char st[])
{   

    int n=myStrlen(st,0), dem=0;
    for(int i=0;i<n;i++)
    {
        while(st[dem]!='\0'&&st[dem]!=' ')
        {
            dem++;
        }
        int k=dem-1, p=0;
        int m=i+(dem-i)/2;
        for(int j=i;j<m;j++)
        {
            swap(st[j],st[k-p]);
            p++;
        }
        i=dem;
        dem++;
    }
}

void StringReverse(char st[]){
	int n = myStrlen(st,0);
	int dem = 0;
	while (dem < n){
		--n;
		char doi = st[dem];
		st[dem] = st[n];
		st[n] = doi;
		++dem; 
	}
	dn(st);
}
void myStrcpy(char s[], int vt, char s1[], int k){};
void mySubstr(char s[], int b, int count, char ss[]){};
bool myStrcat(char s1[], char s2[]){};