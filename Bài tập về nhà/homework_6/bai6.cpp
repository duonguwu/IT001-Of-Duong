#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool isDelete = false;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < s[i + 1])
        {
            s.erase(s.begin() + i);
            isDelete = true;
            break;
        } 
    }
    if (isDelete==false)
        s.pop_back();

    cout << s;
}