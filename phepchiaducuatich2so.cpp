#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
long long pow(long long a,long long b,long long c) 
{
    if (b==0) return 0;
    else
    {
        long long temp=pow(a,b/2,c);
        if (b%2==0)
            return (temp+temp)%c;
        else
            return (a+((temp+temp)%c))%c;
    }  
}
int main()
{ 
    int t;
    cin >> t;
    while(t--)
    {
        long long a=0,b=0,c;
        string s1,s2;
        cin >> s1 >> s2 >> c;
        for(int i=0;i<s1.length();i++)
            a=(a*10+s1[i]-48)%c;
        for(int i=0;i<s2.length();i++)
            b=(b*10+s2[i]-48)%c;
        cout << pow(a,b,c) << endl;
    }
}