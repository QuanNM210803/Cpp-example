#include<iostream>
using namespace std;
int main()
{
    int a;
    while((a=cin.get())!= EOF)
    {
        if(a == 'A')
            cout << "ki tu la A" << endl;
        else 
            cout << "sai" << endl;
    }
    return 0;
}// in ra 2 tu SAI do ham cin.get lay ca ki tu NEWLINE, neu muon in ra chuan co the dung switch case
