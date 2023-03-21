#include<iostream>
#include<iomanip>
#include"time3.h"
using namespace std;
Time :: Time(int h,int m,int s)
{
    setTime(h,m,s);
}
void Time::setTime(int h,int m,int s)
{
    setH(h);
    setM(m);
    setS(s);
}

void Time::setH(int h)
{
    hour=(h>=0&&h<=24 ? h:0);
}
void Time::setM(int m)
{
    minute=(m>=0&&m<=60 ? m:0);
}
void Time::setS(int s)
{
    second=(s>=0&&s<=60 ? s:0);
}

int Time::getH()
{
    return hour;
}
int Time::getM()
{
    return minute;
}
int Time::getS()
{
    return second;
}

void Time::mui24()
{
    cout << setfill('0') << setw(2) << hour << ":"
         << setw(2) << minute << ":" << setw(2) << second << endl;
}
void Time::mui12()
{
    cout << (hour==0 || hour==12 ? 12:hour%12) << ":"
         << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour<12 ? " AM":" PM") << endl;
}