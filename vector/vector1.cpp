#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> list;
    list.push_back(5);//them phan tu vao sau cung vector
    list.push_back(4);
    list.push_back(4);
    list.push_back(2);
    list.push_back(1);
    vector<int>::iterator it=find(list.begin(),list.end(),4);
    cout << *it ;
    // for(int i=0;i<list.size();i++)//duyet thong thuong
    //     cout << list[i] << " ";
    for(vector<int>::iterator i=list.begin();i!=list.end();i++)//dung con tro vector duyet
        cout << *i << " ";
}