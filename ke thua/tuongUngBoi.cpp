#include<iostream>
using namespace std;
class Car
{
    private:
        int speed;
        string mark;
        float price;
    public:
        int getspeed();
        string getmark();
        float getprice();
        Car(int sd=0,string mk="",float pe=0.0);
        virtual void show();//truu tuong
};
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
class Bus:public Car
{
    private:
        int label;
    public:
        Bus(int sd=0,string mk="",float pe=0.0,int ll=0);
        void show();
};
Bus::Bus(int sd,string mk,float pe,int ll):Car(sd,mk,pe)
{
    label=ll;
}
void Bus::show()
{
    cout << "ten xe la " << getmark() << " toc do " << getspeed() << " co gia " << getprice() << " mang so hieu " << label << endl;
}
int main()
{
    Car *ptrCar,myCar(100,"ford",300);
    Bus myBus(150,"mec",5000,27);
    ptrCar=&myCar;
    ptrCar->show();
    ptrCar=&myBus;
    ptrCar->show();//neu ko sd tu khoa virtual thi dong nay se in ra ham SHOW cua lop Car
}
