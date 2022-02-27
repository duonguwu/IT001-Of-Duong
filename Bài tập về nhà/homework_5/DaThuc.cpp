// Định nghĩa đa thức

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
    struct DATHUC
    {
        double heso[100];
        int somu[100];
        int n;
    };
    DATHUC Nhap()
    {
        DATHUC B;
        cin >> B.n;
        for (int i = 0; i < B.n; i++)
        {
            cin >> B.heso[i];
            cin >> B.somu[i];
        }

        return B;
    }
    void Xuat(DATHUC B)
    {
        int dem = 0;
        for (int i = 0; i < B.n; i++)
        {
            if (B.heso[i] != 0)
            {
                if (B.heso[i] > 0 && dem > 0)
                    cout << "+";
                else if (B.heso[i] < 0)
                    cout << "-";
                if (abs(B.heso[i]) != 1)
                    cout << abs(B.heso[i]);
                else if (abs(B.heso[i]) == 1 && B.somu[i] == 0)
                    cout << 1;
                else if (abs(B.heso[i]) != 1 && B.somu[i] == 0)
                    cout << B.heso[i];
                if (B.somu[i] == 1)
                    cout << "x";
                else if (B.somu[i] != 1 && B.somu[i] != 0)
                    cout << "x^" << B.somu[i];
                dem++;
            }
        }
        if (dem == 0)
            cout << 0;
    }
    double TinhDaThuc(DATHUC B, double x)
    {
        double a=0;
        for(int i = 0; i < B.n; i++)
        {
            a+=B.heso[i]*pow(x,B.somu[i]);
        }
        return a;
    }
