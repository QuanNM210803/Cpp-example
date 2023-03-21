#include <iostream>
#include <set>
using namespace std;
int main ()
{
    // set<int> myset;
    // set<int>::iterator it;//khai bao con tro 

    // for (int i=1; i<10; i++) 
    //     myset.insert(i*10);  // 10 20 30 40 50 60 70 80 90

    // it = myset.begin();//dua con tro it toi vi tri dau
    // ++it;

    // myset.erase (it);//xoa tai vi tri con tro tro toi

    // myset.erase (40);//xoa tai vi tri co gia tri 40

    // it = myset.find (60);//tim kiem gia tri 60, neu co thi dua con tro toi vi tri do

    // myset.erase (it, myset.end());//xoa tu vi tri it den cuoi myset

    // cout << "myset contains:";
    // for (it=myset.begin(); it!=myset.end(); ++it)
    //     cout << ' ' << *it;
    // cout << '\n';
    multiset<int> s;
    s.insert(20);
    s.insert(20);
    cout << s.size() << endl;
    s.erase(s.find(20));
    cout << s.size() << endl;
    return 0;
}