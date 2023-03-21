#include<iostream>
#include<iomanip>
#include<cstring>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
class SinhVien
{
    private:
        int masv;
        string name,lop,date;
        float diem;
    public:
        SinhVien();
        friend istream& operator>>(istream &in,SinhVien &a);
        friend ostream& operator<<(ostream &out,SinhVien a);
        bool operator<(SinhVien a)
        {
            return this->diem>a.diem;
        }
};

void htot(string &a)
{
    for(int i=0;i<a.length();i++)
        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;
}
void chuanHoaTen(string &a)
{
    htot(a);
    string temp;
    stringstream ss(a);
    a.erase(a.begin(),a.end());
    while(ss >> temp)
    {
        temp[0]-=32;
        a+=temp;
        a+=" ";
    }
    a.pop_back();
}
void chuanHoaDate(string s,string &a)
{
    string temp;
    stringstream ss(s);
    while(getline(ss,temp,'/'))
    {
        if(temp.length()==1)
            a+="0";
        a+=temp;
        a+="/";
    }
    a.pop_back();
}
void sapxep(SinhVien ds[],int n)
{
    sort(ds,ds+n);
}
SinhVien::SinhVien()
{
    masv=0;
    diem=0.0;
    name[0]='\0';
    lop[0]='\0';
    date[0]='\0';
}
istream& operator>>(istream &in,SinhVien &a)
{
    cin.ignore(1,'\n');
    static int cnt=1;
    a.masv=cnt;
    cnt++;
    getline(in,a.name);
    chuanHoaTen(a.name);
    string s;
    in >> a.lop >> s >> a.diem;
    chuanHoaDate(s,a.date);
    return in;
}
ostream& operator << (ostream &out,SinhVien a)
{
    out << "B20DCCN" << setfill('0') << setw(3) << a.masv << " " << a.name << " " << a.lop
        << " " << a.date << " " << setprecision(2) << fixed << a.diem << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
