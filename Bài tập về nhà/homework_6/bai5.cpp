#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{
    int hours, minutes, seconds ,x,s;
    char colon;
    string AMPM;
    cin >> hours >> colon >> minutes >> colon >> seconds >> AMPM >> x;
    seconds += x;
    while (seconds >= 60) {
        ++minutes;
        seconds -= 60;
    } s=hours;
    while (minutes >= 60) {
        ++hours;
        minutes -= 60;
    }
    if (s<12) {
        for (int i=s;i<=hours;i++){
            if (i%12==0) {if (AMPM=="PM") AMPM="AM"; else AMPM="PM";}
        }
    } else {
        for (int i=s;i<=hours;i++)
            if (i!=12 && i%12==0) if (AMPM=="PM") AMPM="AM"; else AMPM="PM";
    }
    if(AMPM =="AM")
    while (hours >= 12) {
          hours -= 12;}

    if(hours==00) hours=12;

    cout
    << setfill('0')
    << setw(2) << hours << colon
    << setw(2) << minutes << colon
    << setw(2) << seconds <<" "<< AMPM;

    return 0;
}