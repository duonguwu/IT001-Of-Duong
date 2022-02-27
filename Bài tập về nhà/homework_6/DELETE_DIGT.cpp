// Cho một số nguyên không âm, giả sử bạn phải lựa chọn xóa một chữ số và để lại những chữ số còn lại mà không thay đổi thứ tự, số lớn nhất bạn nhận được là số nào?

// Input: 
// Số nguyên không âm N duy nhất (N < 1018 ).
// Output:
// Số lớn nhất có thể tạo ra khi xóa đi đúng 1 chữ số trong N.

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
