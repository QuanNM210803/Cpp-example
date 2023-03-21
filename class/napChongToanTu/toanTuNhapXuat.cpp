#include<iostream>
#include<cstring>
#include<iomanip>
#include<vector>
using namespace std;
void tot(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    }
}
void chuanhoa(string &s)
{
    stringstream ss(s);
    string tmp;
    vector <string> v;
    while(ss>>tmp)
        v.push_back(tmp);
    s.erase(s.begin(),s.end());
    for(int i=0;i<v.size();i++)
    {
        v[i][0]-=32;
        s+=v[i];
        s+=" ";
    }
    s.pop_back();
}
class SinhVien
{
    private:
        string masv,name,lop;
        int day,month,year;
        float diem;
    public:
        SinhVien();
        friend istream &operator >> (istream &in,SinhVien &sv);
        friend ostream &operator << (ostream &out,SinhVien &sv);
};;
SinhVien :: SinhVien()
{
    masv="B20DCCN001";
    name='\0';
    lop='\0';
    day=0;
    month=0;
    year=0;
    diem=0.0;
}
istream &operator >> (istream &in,SinhVien &sv)
{
    getline(in,sv.name);
    tot(sv.name);
    chuanhoa(sv.name);
    getline(in,sv.lop);
    char date[20];
    in.get(date,20);
    in >> sv.diem;
    char *token=strtok(date,"/");
    int b[3],i=0;
    while(token!=NULL)
    {
        b[i++]=atoi(token);
        token=strtok(NULL,"/");
    }
    sv.day=b[0];
    sv.month=b[1];
    sv.year=b[2];
    return in;
}
ostream &operator << (ostream &out,SinhVien &sv)
{
    out << sv.masv << " " << sv.name << " " << sv.lop << " " << setfill('0') << setw(2) << sv.day <<"/"
        << setfill('0') << setw(2) << sv.month <<"/"<< sv.year << " " << fixed << setprecision(2) << sv.diem;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}