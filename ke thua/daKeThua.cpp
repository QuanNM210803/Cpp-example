#include<iostream>
using namespace std;
class Car
{
    private:
        int speed;
        string mark;
        float price;
    public:
        Car();
        Car(int ,string, float);
        int getspeed();
        string getmark();
        float getprice();
        void show();
};
Car::Car()
{
    speed=0;
    mark="";
    price=0.0;
}
Car::Car(int sd,string mk,float pe)
{
    speed=sd;
    mark=mk;
    price=pe;
}
int Car::getspeed()
{
    return speed;
}
string Car::getmark()
{
    return mark;
}
float Car::getprice()
{
    return price;
}
void Car::show()
{
    cout << "ten xe la " << mark << " toc do " << speed << " co gia " << price << endl;
}
class Transport
{
    private:
        float ticket;
    public:
        Transport();
        Transport(float);
        float getTransport();
        void show();
};
Transport::Transport()
{
    ticket=0;
}
Transport::Transport(float tt)
{
    ticket=tt;
}
float Transport::getTransport()
{
    return ticket;
}
void Transport::show()
{
    cout << "gia ve la " << ticket << endl;
}
class Bus:public Car,public Transport
{
    private:
        int label;
    public:
        Bus();
        Bus(int,string,float,float,int);
        void show();
};
Bus::Bus():Car(),Transport()
{
    label=0;
}
Bus::Bus(int sd,string mk,float pe,float tt,int ll):Car(sd,mk,pe),Transport(tt)
{
    label=ll;
}
void Bus::show()
{
    cout << "ten xe la " << getmark() << " toc do " << getspeed() << " co gia " << getprice() << " mang so hieu " << label << " co gia " << getTransport() << endl;
}
int main()
{
    Bus mybus(100,"Toyota",5000,7,19);
    mybus.Car::show();
    mybus.Transport::show();
    mybus.show();
}