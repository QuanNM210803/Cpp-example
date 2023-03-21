#include<iostream>
#include<sstream>
#include<cstring>
using namespace std; 
int main()
{
    string s="abc , xyz ,     def";
    stringstream ss(s);
    string token;
    while(getline(ss,token,','))
        cout << token << endl;
}
