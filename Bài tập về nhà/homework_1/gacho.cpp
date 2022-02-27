#include <iostream>
using namespace std;
int main() {
    int cho, ga;
    int x,y;
    cin >> x >> y;
    for (cho=1;cho<x;cho++)
    for (ga=1;ga<x;ga++)
        if ( (ga+cho==x) && (ga*2+cho*4==y) )
            {
                cout<<"So ga= "<<ga;
                cout<<"\nSo cho= "<<cho;
            }    
}