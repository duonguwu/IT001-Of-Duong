
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

int myStrlen(char s[], int k) {
    int len = 0;
    while(s[len] != '\0')
    len++;
    return len-k;
};
//Ham tra ve chieu dai chuoi s ke tu vi tri k
 
void myMemmove(char s[], int vt, int k) {
    int len = myStrlen(s, 0);
    for (int i=vt+k; i< len; ++i)
        s[i-k] = s[i];
 
    for (int i=len - k; i< len; ++i)
        s[i] = '\0';
 
 
}; //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
 
int myStrstr(char s[], char s1[]) {
}; //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
 
void Chuanhoa(char s[]){
    /// B1: Chuyển tất cả thành kí tự thường.
    for (int i=0; s[i] != '\0'; ++i)
        s[i] = tolower(s[i]);
    /// B2: Xoá đi những kí tự " " ở đầu chuỗi.
    while (s[0] == ' ')
         myMemmove(s, 0, 1);
    /// B3: Xoá đi những kí tự " " ở cuối chuỗi.
    int len = myStrlen(s, 0);
    while(s[len-1] == ' '){
        myMemmove(s, len-1, 1);
        len = myStrlen(s,0); /// Sau khi xoá đi 1 kí tự thì cập nhật lại chiều dài
    }
    /// B4: Xoá đi những dấu " " gần nhau ở giữa.
    len = myStrlen(s, 0);
    for (int i=1; i < len; ++i)
    if (s[i] == ' ' && s[i+1] == ' '){
        myMemmove(s, i, 1);
        i--;  /// quan trọng, giống như khi xử lý mảng 1D.
        len--; /// quan trọng, giống như khi xử lý mảng 1D.
    }
 
    len = myStrlen(s, 0); 
    s[0] = toupper(s[0]); /// Viết hoa kí tự đầu.
    for (int i=1; i < len; ++i)
    if (s[i-1] == ' '){ /// Kiểm tra kí tự trước đó là dấu " " thì viết hoa chữ đó.
        s[i] = toupper(s[i]);
    }
}
 