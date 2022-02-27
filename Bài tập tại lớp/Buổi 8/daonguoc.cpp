// #include <iostream>
// #include <string.h>
// using namespace std;

// int main(){
//     char s[300];
//     gets(s);
//     strrev(s);
//     cout << "\n" << s << endl;
// }

#include <iostream>
using namespace std;
struct birthday
{
      int d; // day
      int m; // month
      int y; // year
};
struct info
{
      int ID; // code of staff
      birthday b;
};
int main(){
      info a =  { 1009, 16, 9, 1989 };
              cout << a.ID <<", dd/mn/yyyy = " << a.b.d << a.b.m << a.b.y;
     return 0;
}