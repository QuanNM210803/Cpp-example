#include<iostream>
using namespace std;
int thamtri(int x)
{
    x*=10;
    return x;
}
void thamchieu(int &y)
{
    y*=10;
}
int main()
{
    int x=2;
    int y=5;
    cout << "Tham tri" << endl;
    cout << "Truoc khi tham tri x=" << x << endl << "X trong ham tham tri x=" << thamtri(x) << endl << "Sau khi tham tri x=" << x << endl;
    cout << "Tham chieu" << endl;
    cout << "Truoc khi tham chieu y=" << y << endl;
    thamchieu(y);
    cout << "Sau khi tham chieu y=" << y << endl; 
    return 0; 
}