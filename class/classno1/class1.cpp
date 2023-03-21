#include<iostream>
#include<iomanip>
#include"time1.cpp"
using namespace std;
int main()
{
    Time t;
    cout << "Truoc khi setTime:" << endl;
    t.mui24();
    t.mui12();
    t.setTime(18,45,32);
    cout << "Sau khi setTime:" << endl;
    t.mui24();
    t.mui12();
}