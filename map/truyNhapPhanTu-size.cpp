#include<iostream>
#include<sstream>
#include<map>
using namespace std;
int main()
{
    map <string,int> mp;//set sx theo kq, map sx theo key
    map <string,int>::iterator tmp;//khai bao con tro map
    // mp["quan"]=9;
    // mp["van"]=10;
    // mp["quan"]=11;
    mp.insert(pair<string,int>("quan",11));
    mp.insert(pair<string,int>("van",10));
    mp.insert(pair<string,int>("quan",9));
    mp["adu"]=1;
    mp["adu"]++;
    cout << mp.size() << endl;
    // for(tmp=mp.begin();tmp!=mp.end();tmp++)
    //     cout << tmp->first << " " << tmp->second << endl;
    for(auto x:mp)
        cout << x.first << " " << x.second << endl;
}