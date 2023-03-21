#include<iostream>
using namespace std;
int main()
{
    int a[]={1,4,2,6};
    int n=sizeof(a)/sizeof(int);
    int *pt=a;
    for(int i=0;i<n;i++)
    {
        cout << "*(pt+" << i << ") = " << *pt << endl; // or use *(pt+i)
        pt++;
    }
    for(int i=0;i<n;i++)
    {
        cout << "*(a+" << i << ")= " << *(a+i) << endl;
    }
}