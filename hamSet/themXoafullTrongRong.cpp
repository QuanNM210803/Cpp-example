#include<iostream> 
#include<set>
using namespace std;
int main()
{
    set <int> data;
    int k;
    cin >> k;
    while(k!=0)
    {
        data.insert(k);//them phan tu vao data
        cin >> k;
    }
    cout << "Trc khi xoa toan bo DATA:\nSo phan tu la: " << data.size() << endl;//dem so phan tu cua data
    cout << "DATA trong rong hay ko?(1-co,0-khong)---> gia tri tra ve: "<< data.empty() << endl;//ktra trong rong hay ko
    data.clear();//xoa toan bo DATA
    cout << "Sau khi xoa toan bo DATA:\nSo phan tu la: " << data.size() << endl;//dem so phan tu cua data
    cout << "DATA trong rong hay ko?(1-co,0-khong)---> gia tri tra ve: "<< data.empty() << endl;
}