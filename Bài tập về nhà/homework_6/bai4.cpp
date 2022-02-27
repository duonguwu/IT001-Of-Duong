#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	bool kt = myStrcat(s1, s2);
    if(kt==false)
	cout<<"Khong noi duoc. Khong du bo nho.";
	else
    {
            cout<<s1<<s2;
    }
}

int myStrlen(char s[]){
    int n = 0;
    while (s[n] != '\0')
    n++;
    return n;
}

bool myStrcat(char s1[],char s2[])
{
    if((myStrlen(s1)+myStrlen(s2))>256)
        return false;
    return true;
}

