#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int> mp1,mp2;//set sx theo kq, map sx theo key
    map <string,int>::iterator tmp;//khai bao con tro map
    mp1["quan"]=9;
    mp1["van"]=10;
    mp1["adu"]=11;
    mp2=mp1;// gan 2 map cho nhau
    for(auto x:mp2)
        cout << x.first << " " << x.second << endl;
}