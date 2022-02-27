#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char *s, *s1;
    s = new char[MAX];
    s1 = new char[MAX];
	cin.getline(s, MAX);
	cin.getline(s1, MAX);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{
    int r = 0;
    char s2[myStrlen(s,0)+myStrlen(s1,0)];
    for (int i = 0; i < k; i++){
        s2[i] = s[i];
    }
    for (int i = k; i < myStrlen(s1,0) + k; i++){
        s2[i] = s1[r];
        r++;
    }
    for (int i = myStrlen(s1,0) + k; i < myStrlen(s,0) + myStrlen(s1,0); i++  ){
        s2[i] = s[k];
        k++;
    }
    s2[myStrlen(s1,0) + myStrlen(s,0)] = '\0';
    cout << s2;
}
}
int myStrlen(char s[], int k){
    int n = 0;
    while (s[n] != '\0')
    n++;
    return n;
}







