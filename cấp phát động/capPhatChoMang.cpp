#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int *p= new int[5] {4,2,5,5,7};
    // co the khoi tao bien bang cach dung for
    for(int i=0;i<5;i++,p++)
        cout << setw(5) << *p;
    delete[] p;// giai phong khi ko su dung
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char *c = new char [100];
    cin.get(c,100);
    cout << c;
    delete[] c;
}