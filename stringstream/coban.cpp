#include<iostream>
#include<sstream>
#include<vector>
using namespace std; 
int main()
{
    //trong stringstream dau ">>" de lay phan tu ra khoi stringstream,dau "<<" de nap phan tu vao stringstream
    // lay cac phan tu giua cac dau cach de nap vao stringstream
    string s;
    getline(cin,s);
    stringstream ss(s);//nap s vao buffer ss, co the dung ss << s de nap;
    vector <string> v;
    string tmp;
    while(ss >> tmp)//trich xuat tung phan tu trong ss ra tmp, dong thoi gan tmp vao vector
        //v.push_back(tmp);
    // for(int i=0;i<v.size();i++)
    //     cout << v.at(i) << " ";//in ra phan tu vector tai vi tri i
    cout << tmp;
}
