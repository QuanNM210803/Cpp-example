#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)//ham dieu kien
{
    return a.first<b.first;//dki chi nho hon moi swap
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int nhap;
        pair<int,int> p[n+1];
        for(int i=0;i<n;i++)
        {
            cin >> nhap;
            p[i]=make_pair(abs(nhap-x),nhap);
        }
        stable_sort(p,p+n,cmp);//tuong tu sort, nhung stable giu thu tu tuong doi cua cac phan tu co gia tri tuong duong
        for(int i=0;i<n;i++)
            cout << p[i].second << " ";
        cout << endl;
    }
}