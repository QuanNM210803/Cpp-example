#include<iostream>
#include<cstring>
#include<set>
using namespace std;
struct SinhVien
{
    int stt;
    string ma,name,lop,mail,fac;
};
void nhap(SinhVien &a)
{
    static int st=1;
    a.stt=st;
    st++;
    getline(cin,a.ma);
    getline(cin,a.name);
    getline(cin,a.lop);
    getline(cin,a.mail);
    getline(cin,a.fac);
}
void xuat(set<SinhVien> s)
{
    for(auto x:s)
        cout << x.stt << " " << x.ma << " " << x.name << " " << x.lop << " " << x.mail << " " << x.fac << endl;
}
bool operator<(const SinhVien &a,const SinhVien &b)
{
    return a.ma<b.ma;
}
void timkiem(SinhVien a[],int n,string key)
{
    set<SinhVien> s;
    for(int i=0;i<n;i++)
    {
        if(a[i].fac==key)
            s.insert(a[i]);
    }
    xuat(s);
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien ds[n];
    for(int i=0;i<n;i++)
    	nhap(ds[i]);
    int q=0;
    cin >> q;
    cin.ignore();
    string truyvan;
    for(int i=0;i<q;i++)
    {
        cin >> truyvan;
        timkiem(ds,n,truyvan);
    }
}