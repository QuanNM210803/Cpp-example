#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=0;
    int sum=0;
    int dem=0;
    cin >> n;
    while(n!=-1)
    {
        sum+=n;
        dem++;
        cin>>n;
    }
    float tb=static_cast<float>(sum)/dem;//ep kieu
    cout<< setprecision(5)<< fixed;// phai khai bao iomanip
    cout<<"diem trung binh la: " << tb;


    cout << endl;
    cout << setfill('/') << setw(3) << "7";
    return 0;
}
