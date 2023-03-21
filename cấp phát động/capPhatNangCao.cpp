#include<iostream>
#include<iomanip>
using namespace std;
//cap phat lai vung nho moi, mo rong kich thuoc vung nho cap phat
int main()
{
    int *p=new int[5] {4,5,2,6,1};
    int *ptr=p;
    p=new int[10];
    for(int i=0;i<5;i++)
    {
        *(p+i)=*(ptr+i);
    }
    delete[] ptr;
    for(int i=0;i<5;i++,p++)
        cout << setw(4) << *p;
    delete[] p;
    return 0;
}