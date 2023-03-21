#include<iostream>
using namespace std;
class phanso
{
    public:
        phanSo();
        void in();
        phanso operator+(const phanso &pt);//nap chong toan tu +(doi voi toan tu 2 ngoi chi can chuyen 1 doi so va doi so nay chinh la doi so thu 2)
        void out();
        operator float();//chuyen kieu
    private:
        int tu;
        int mau;
};
phanso::phanSo()
{
    mau=1;
    tu=0;
}
void phanso:: in()
{
    cin >> tu >> mau;
}
phanso phanso::operator+(const phanso &pt)
{
    phanso kq;
    kq.tu=this->tu*pt.mau+this->mau*pt.tu;
    kq.mau=this->mau*pt.mau;
    return kq;
} 
void phanso::out()
{
    cout << tu << "/" << mau;
}
phanso::operator float()
{
    return (float)this->tu/this->mau;
}
int main() 
{
    phanso a;
    phanso b;
    a.in();
    b.in();
    float c=a+b;
    cout << c ;
}

