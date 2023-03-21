#include<iostream>
using namespace std;
using ll=long long;
ll ucln(ll a,ll b)
{
    if(b%a==0)
        return a;
    else    return ucln(b%a,a);
}
class PhanSo
{
    private:
        ll tu,mau;
    public:
        PhanSo(ll t,ll m):tu(t),mau(m){}
        friend ostream& operator << (ostream& out,PhanSo pt);
        friend istream& operator >> (istream& in,PhanSo &pt);
        PhanSo operator + (PhanSo&);
    
};
istream& operator >> (istream& in,PhanSo &pt)
{
    in >> pt.tu >> pt.mau;
    return in;
}
ostream& operator << (ostream& out,PhanSo pt)
{
    out << pt.tu << "/" << pt.mau;
    return out;
}
PhanSo PhanSo :: operator + (PhanSo &a)
{
    PhanSo kq(1,1);
    kq.tu=this->tu*a.mau+this->mau*a.tu;
    kq.mau=this->mau*a.mau;
    ll uc=ucln(kq.tu,kq.mau);
    kq.tu/=uc;
    kq.mau/=uc;
    return kq;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}