#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double t,l,h;
    cin >> t >> l >> h;
    double dtb = (t+l+h)*1.0/3;
    cout << setprecision(2)<< fixed << "DTB = " << dtb << endl;
    if (dtb >= 9 && dtb <= 10){
        cout << "Loai: XUAT SAC";
    }
    else if (dtb >= 8 && dtb < 9){
        cout << "Loai: GIOI";
    }
    else if (dtb >= 7 && dtb < 8){
        cout << "Loai: KHA";
    }
    else if (dtb >= 6 && dtb < 7){
        cout << "Loai: TB KHA";
    }
    else if (dtb >= 5 && dtb < 6){
        cout << "Loai: TB";
    }
    else if (dtb >= 4 && dtb < 5){
        cout << "Loai: YEU";
    }
    else {
        cout << "Loai: KEM";
    }

    
}