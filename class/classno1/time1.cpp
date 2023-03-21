#include<iostream>
#include<iomanip>
#include"time1.h"
using namespace std;
Time :: Time()
{
    hour=0;
    minute=0;
    second=0;
}
void Time :: mui24()
{
    cout << "mui24 is: " << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}
void Time :: mui12()
{
    cout << "mui12 is: " << setfill('0') << setw(2) << (hour==0 || hour==12 ? 12 : hour%12) << ":" << setw(2) << 
    minute << ":" << setw(2) << second << (hour>12 ? " PM" : " AM") << endl;
}
void Time :: setTime(int h, int m, int s)
{
    hour = ( h >= 0 && h < 24 ) ? h : 0; 
    minute = (m>=0 && m<60) ? m : 0;
    second = (s>=0 && s<60) ? s : 0;
}