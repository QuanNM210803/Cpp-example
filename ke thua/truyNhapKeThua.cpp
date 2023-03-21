#include<iostream>
using namespace std;
class Car
{
    private:
        int speed;
        string mark;
        float price;
    public:
        void setspeed(int);
        int getspeed();
        void setmark(string);
        string getmark();
        void setprice(float);
        float getprice();
        Car(int sd=0,string mk="",float pe=0.0);
        void show();
}; 
Car::Car(int sd, string mk,float pe)
{
    speed=sd;
    mark=mk;
    price=pe;
}
void Car::setspeed(int sd)
{
    speed=sd;
}
int Car::getspeed()
{
    return speed;
}
void Car::setmark(string mk)
{
    mark=mk;
}
string Car::getmark()
{
    return mark;
}
void Car::setprice(float pe)
{
    price=pe;
}
float Car::getprice()
{
    return price;
}
void Car::show()
{
    cout << "ten xe la " << mark << " toc do " << speed << " co gia " << price << endl;
}
class Bus:public Car
{
    private:
        int label;
    public:
        Bus(int sp=0,string mk="",float pe=0.0, int ll=0);
        void setlabel(int);
        int getlabel();
        void show();//nap chong cac phuong thuc lop co so de co the in nhan hieu label
};
Bus::Bus(int sd,string mk,float pe,int ll):Car(sd,mk,pe)
{
    label=ll;
}
void Bus::setlabel(int ll)
{
    label=ll;
}
int Bus::getlabel()
{
    return label;
}
void Bus::show()
{
    cout << "ten xe la " << getmark() << " toc do " << getspeed() << " co gia " <<getprice() << " mang so hieu " << label;
}
int main()
{
    // Bus mybus(100,"toyota",8000,19);
    Bus mybus;
    mybus.setspeed(100);
    mybus.setmark("toyota");
    mybus.setprice(8000);
    mybus.setlabel(19);
    mybus.Car::show();
    mybus.show();
}