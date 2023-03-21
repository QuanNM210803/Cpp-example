#include<iostream>
using namespace std;
template <typename QUAN> // co the thay typename = class
// luc nay QUAN se la kieu du lieu dai dien
QUAN smax(QUAN x,QUAN y)
{
    QUAN max=x;
    if(y>x)
        max=y;
    return max;
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << "MAX int is " << smax(x,y) << endl;
    char x1,y1;
    cin >> x1 >> y1;
    cout << "MAX char is " << smax(x1,y1) << endl;
}