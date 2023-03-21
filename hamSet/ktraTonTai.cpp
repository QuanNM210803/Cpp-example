#include<iostream> 
#include<set>
using namespace std;
int main()
{
    set <int> data{1,2,4,6,3,8};
    int key=7;
    if(data.count(key))//ktra key co trong data hay ko. neu co tra ve 1,khong co tra ve 0
        cout << "key co trong data";
    else
        cout << "key ko co trong data";
}