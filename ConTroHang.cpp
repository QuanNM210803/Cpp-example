#include<iostream>
using namespace std;
int main()
{
    int x=5,y;
    const int *const pt=&x;
    *pt=7;// gia tri *pt ko the thay doi vi khai bao const int
    pt=&y; // dia chi pt ko the thay doi vi khai bao const pt
    return 0;
}