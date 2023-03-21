#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <string,int> mp1,mp2;//set sx theo kq, map sx theo key
    map <string,int>::iterator tmp;//khai bao con tro map
    mp1["quan"]=1;
    mp1["van"]=2;

    mp2["adu"]=11;
    mp2["maythichgi?"] = 22;
    mp2["maylamsao?"] = 33;

    mp1.swap(mp2);//swap 2 map

    for(auto x:mp1)
        cout << x.first << " " << x.second << endl;
    cout << endl;
    for(auto x:mp2)
        cout << x.first << " " << x.second << endl;
}