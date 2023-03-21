#include<iostream>
using namespace std;
#include"sale.h"
SALE :: SALE()
{
    for(int i=0;i<12;i++)
        t[i]=0.0;
}
void SALE :: input()
{
    double n;
    for(int i=1;i<=12;i++)
    {
        cout << "Thang " << i << " la: ";
        cin >> n;
        ktra(i,n);
    }  
}
void SALE :: ktra(int month,double n)
{
    if(month>=1 && month<=12 && n>0)
    {
        t[month-1]=n;
    }
}
void SALE :: output()
{
    cout << "Total is: " << total();
}
double SALE :: total()
{
    double sum=0.0;
    for(int i=0;i<12;i++)
        sum+=t[i];
    return sum;
}