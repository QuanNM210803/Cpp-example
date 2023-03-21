#include<iostream>
using namespace std;
class Car
{
    private:
        int speed;
        string mark;
        float price;
    public:
        Car(int sd=0,string mk="",float pe=0.0);//vua co chuc nang khoi tao ngam dinh, vua co chuc nang khoi tao tham so
        void init(int, string, float);
        friend void moreExpensive(Car,Car);
};
void Car::init(int sd,string mk, float pe)
{
    speed=sd;
    mark=mk;
    price=pe;
}
Car::Car(int sd,string mk,float pe)
{
    speed=sd;
    mark=mk;
    price=pe;
}
void moreExpensive(Car a,Car b)
{
    if(a.price>b.price)
        cout << "xe 1 dat hon\n";
    else if(a.price<b.price)
        cout << "xe 2 dat hon\n";
    else    cout << "hai xe bang nhau";
}
int main()
{
//    Car a(100,"MEC",7000),b(150,"LAM",9000);
//khoi tao theo 2 cach khac nhau
    Car a,b;
    a.init(100,"MEC",7000);
    b.init(150,"LAM",9000);
    moreExpensive(a,b);
}