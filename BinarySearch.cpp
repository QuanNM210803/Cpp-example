#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void printer(int a[],int left,int right)
{
    for(int i=left;i<=right;i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    const int n=10;
    int a[n];
    cout << "Nhap mang:" << endl;
    for(int i=0;i<n;i++)
        cin >> a[i];

    int key;
    cout << "Key is: ";
    cin >> key;

    bubbleSort(a,n);
    cout <<"Arrange array:" << endl;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;

    int left=0,right=n-1;
    int tinHieu=0;
    while(left <= right)
    {
        int mid=(left + right)/2;
        cout << "\nMid is : a[" << mid << "]=" << a[mid] << endl;
        if(a[mid] > key)
            right = mid-1;
        else if(a[mid] == key)
        {
            tinHieu=1;
            cout << a[mid] << endl;
            break;
        }
        else
            left=mid+1;
        printer(a,left,right);
    }
    if(tinHieu==1)
        cout << "\nFound key" << endl;
    else 
        cout << "\nNot found key" << endl;
}