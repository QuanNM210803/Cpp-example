#include<iostream>
using namespace std;
//mot ham trong public dc goi la phuong thuc
//phai khai bao dung chinh tu nay moi dung
class Car;
class Person
{
    private:
        string name;
        int age;
    public:
        void init(string, int);
        int permiss(Car);
};
class Car
{
    private:
        int speed;
        string mark;
        float price;
    public:
        void init(int,string, float);
        friend int Person::permiss(Car);
};
void Person::init(string s,int tuoi)
{
    name=s;
    age=tuoi;
}
void Car::init(int sd,string mk,float pe)
{
    speed=sd;
    mark=mk;
    price=pe;
}
int Person::permiss(Car a)
{
    if(age<18)
        cout << "chua du tuoi la xe\n";
    else if(age<21 && a.speed>150)
        cout << "chua du tuoi la xe\n";
    else    cout << "duoc phep lai xe\n";
    return 0;
}
int main()
{
    Car a;
    Person b;
    a.init(125,"Honda",5000);
    b.init("Quan",19);
    b.permiss(a);
}
