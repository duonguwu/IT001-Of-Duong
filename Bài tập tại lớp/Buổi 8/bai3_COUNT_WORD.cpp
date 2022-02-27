
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	gets(s);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}

int myStrlen(char s1[], int k){
	int len = 0;
	while (s1[len] != '\0'){
		len++;
	}
	return len-k;
}

int myStrcmp(char s1[], char s2[]){
	if(strcmp(s1,s1)==0) return 0; 
}

void myMemmove(char s[], int vt, int k){
	int len = myStrlen(s,k);
	for (int i = vt+k; i<len; i++)
		s[i-k] = s[i];
	for (int i = len-k; i< len;i++)
		s[i] = '\0';
}
void myStrcpy(char s[], int vt, char s1[], int k){};
int myStrstr(char s[], char s1[]){};
void mySubstr(char s[], int b, int count, char ss[]){};
bool myStrcat(char s1[], char s2[]){};

void DemTieng(char s1[]){
	int len = myStrlen(s1,0);
	    while (s1[0] == ' ')
         myMemmove(s, 0, 1);
    /// B3: Xoá đi những kí tự " " ở cuối chuỗi.
    int len = myStrlen(s, 0);
    while(s1[len-1] == ' '){
        myMemmove(s1, len-1, 1);
        len--; /// Sau khi xoá đi 1 kí tự thì cập nhật lại chiều dài
    }
    /// B4: Xoá đi những dấu " " gần nhau ở giữa.
    len = myStrlen(s1, 0);
    for (int i=1; i < len; ++i)
    if (s1[i] == ' ' && s1[i-1] == ' '){
        myMemmove(s1, i, 1);
        i--;  /// quan trọng, giống như khi xử lý mảng 1D.
        len--; /// quan trọng, giống như khi xử lý mảng 1D.
    }

	while (s1[i] != '\0'){
		
	}

}