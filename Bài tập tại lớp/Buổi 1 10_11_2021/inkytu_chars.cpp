#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main () {
    char x,y;
    int a;
    cin >> x >> y >> a;
    cout << "Ma ASCII cua ky tu `" << x <<"', `" << y << "' lan luot la " << (int)x << " va "<<(int)y<< endl;
    cout << "Khoang cach giua hai ky tu `" <<x<< "', `" <<y<< "' la " << abs((int)y-(int)x)<<endl;
    cout << "Dang viet hoa ky tu `"<<x<< "' la `" <<(char)(x-32)<< "'"<< endl;
    cout << a<< " la ma ASCII cua ky tu `"<<(char)a<<"'"<<endl;
}