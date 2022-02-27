#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int ngay,thang,nam;
    cin >> ngay >> thang >> nam;
    if (thang > 12 || thang < 0 ){
        cout << "Thang khong hop le.";
    }
    if (nam <= 0){
        cout << "Nam khong hop le.";
    } else {
    switch (thang){
    case 0:
        cout << "Thang khong hop le."; break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (ngay > 0 && ngay <= 31){
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay hop le."; break;
        } else {
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay khong hop le."; break;
        }
    case 4: case 6: case 9: case 11:
        if (ngay <= 30 && ngay >0){
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay hop le.";break;
        } else {
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay khong hop le.";break;
        }
    case 2:
        if( ngay <=28 && ngay > 0){
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay hop le.";break;
        }  else if (ngay == 29){
            if (nam % 400 == 0){
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay hop le.";break;
            } else if (nam % 4 == 0 && nam % 100 !=0) {
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay hop le.";break;
            }
            else {
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay khong hop le.";break;
        }
        } else {
            cout << ngay << "/"<<thang<<"/"<<nam<< " la ngay khong hop le.";break;
        }
    }
}
}