#include<iostream>
using namespace std;
int function1(int);
int function2(int);
int main()
{
    int x=5;
    int y=7;
    int (*pt) (int)=function1;
    cout << (*pt) (x) << endl;

    int (*pt1) (int)=function2;
    cout << (*pt1) (y) << endl;
}
int function1(int a)
{
    a*=10;
    return a;
}
int function2(int a)
{
    a*=5;
    return a;
}