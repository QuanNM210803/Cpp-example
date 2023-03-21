#include<iostream>
using namespace std;
class Engine
{
    private:
        int power;
    public:
        Engine();
        Engine(int);
        float getpower();
        void show();
};
Engine::Engine()
{
    power=0;
}
Engine::Engine(int pr)
{
    power=pr;
}
float Engine::getpower()
{
    return power;
}
void Engine::show()
{
    cout << "nang luong la " << power << endl;
}
class Car:public virtual Engine
{
    private:
        int speed;
        string mark;
        float price;
    public:
        Car();
        Car(int,int ,string, float);
        int getspeed();
        string getmark();
        float getprice();
        void show();
};
Car::Car():Engine()
{
    speed=0;
    mark="";
    price=0.0;
}
Car::Car(int pr,int sd,string mk,float pe):Engine(pr)
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
class Transport:public virtual Engine
{
    private:
        float ticket;
    public:
        Transport();
        Transport(int,float);
        float getTransport();
        void show();
};
Transport::Transport():Engine()
{
    ticket=0;
}
Transport::Transport(int pr,float tt):Engine(pr)
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
        Bus(int,int,string,float,float,int);
        void show();
};
Bus::Bus():Engine(),Car(),Transport()
{
    label=0;
}
Bus::Bus(int pr,int sd,string mk,float pe,float tt,int ll):Engine(pr),Car(pr,sd,mk,pe),Transport(pr,tt)//Engine p cho len trc Car va Transport
{
    label=ll;
}
void Bus::show()
{
    cout << "ten xe la " << getmark() << " toc do " << getspeed() << " co gia " << getprice() << " mang so hieu " << label 
    << " co gia " << getTransport() << ", nang luong la " << Car::getpower() << endl;
}
int main()
{
    Bus mybus(69,100,"Toyota",5000,7,19);
    mybus.Car::Engine::show();
    mybus.Transport::Engine::show();
    mybus.Car::show();
    mybus.Transport::show();
    mybus.show();
}