#include<iostream>
using namespace std;
int x=1; //bien toan cuc
void local()
{
    int x=25;// bien tu dong. bien bi huy khi ham ket thuc va khoi dong lai =25 khi goi ham lan tiep theo
    cout << "bien ham tu dong x=" << x << endl;
    x++;
    cout << "bien ham tu dong x=" << x << endl;
}
void staticlocal()
{
    static int x=10;//bien tinh dia phuong cua ham. no dc goi 1 lan va giu nguyen gia tri giua cac lan goi ham
    cout << "bien static x=" << x << endl;
    x++;
    cout << "bien static x=" << x << endl;
}
void global()
{
    //ham se lay bien x global
    cout << "bien toan cuc x=" << x << endl;
    x*=10;
    cout << "bien toan cuc x=" << x << endl;
}
int main()
{
    int x=5; // bien dia phuong voi pham vi ham
    cout << "bien dia phuong voi pham vi ham x=" << x << endl;
    {
        int x=7;// tao x pham vi khoi, khi het khoi x bi huy bo
        cout << "bien x pham vi khoi x=" << x << endl;
    }
    cout << "bien dia phuong voi pham vi ham khong doi x=" << x << endl;
    local();
    staticlocal();
    global();
    cout << "\nGoi lan luot cac ham lan 2\n" << endl;
    local();
    staticlocal();
    global();
    return 0;
}