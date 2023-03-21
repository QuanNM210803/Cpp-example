#include<iostream>
#include<sstream>
#include<vector>
#include<map>
using namespace std;
void tot(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    }
}
int main() 
{
    int t;
    cin >> t;
    cin.ignore();
    map<string,int> mp;//tuong tuong nhu mang int, khoi tao ban dau a[i]=0; thi tuong tu mp["abc"]=0;
    map<string,int>::iterator temp;//con tro map
    while(t--)
    {
        string s;
        getline(cin,s);
        tot(s);
        stringstream ss(s);
        string token;
        vector <string> a;
        while(ss >> token)
            a.push_back(token);
        string output;
        output=a.back();
        for(int i=0;i<a.size()-1;i++)
            output+=a[i][0];
        temp=mp.find(output);
        if(temp==mp.end())
        {
            mp[output]=1;
            mp["adu"]=1;
            cout << output << "@ptit.edu.vn";
        }
        else
        {
            mp[output]++;
            cout << output << mp[output] << "@ptit.edu.vn";
        }
        cout << endl;  
    }
}

