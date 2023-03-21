#include<iostream>
#include<iomanip>
using namespace std;
void print(int [],int );
bool tang(int ,int );
bool giam(int ,int );
void swap(int *,int *);
void bubble(int [],int ,bool (*) (int,int));
int main()
{
    const int n=10;
    int a[n]={3,5,67,54,1,4,23,56,13,34};
    cout << "Before arrange:" ;
    print(a,n);
    int dki;
    cout << endl << "Sap xep tang(1) hay giam(0)? ";
    cin >> dki;
    cout << "After arrange:";
    if(dki==1)
        bubble(a,n,tang);
    else if(dki==0)
        bubble(a,n,giam);
    else cout << "Sai cu phap" ;
}
void bubble(int a[],int n,bool (*ktra) (int,int))//ktra la 1 ham con tro nhan 2 tham so int truyen vao va tra ve kieu bool
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if((*ktra) (a[j],a[j+1]))// goi ham ktra, tham nhap con tro de chay ham
                swap(&a[j],&a[j+1]);
        }
    }
    print(a,n);
}
bool tang(int a,int b)
{
    return a > b;
}
bool giam(int a,int b)
{
    return a < b;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout << setw(4) << a[i];
}