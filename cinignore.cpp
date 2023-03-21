#include<iostream>
using namespace std;
int main()
{
    char a;
    cin.get(a);// lay ki tu dau nhap vao
    cout << a << endl;
    cin.ignore(13,'v'); // bo qua den ki tu v, hoac khi du 13 ki tu thi trich xuat ki tu 14 
    cin.get(a);
    cout << a << endl;// lay ki tu dau tien sau ki tu v
    return 0;
}