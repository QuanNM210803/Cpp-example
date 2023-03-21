#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double moc=1000;
    double tang=0.03;
    int count=1;
    cout<<"Year"<< setw(20) <<"Dan So";
    cout << "\n";
    cout<< setprecision(2) << fixed;
    for(int year=2020;year<=2025;year++)
    {
        double danso = moc*pow(1+tang,count++);
        cout << year << setw(20) << danso << "\n";
    }
    return 0;
}