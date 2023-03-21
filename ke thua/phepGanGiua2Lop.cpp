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
        void show();
};
Car::Car(int sd, string mk,float pe)
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
        Bus(int sp=0,string mk="",float pe=0.0, int ll=0);
        int getlabel();
        void show();//nap chong cac phuong thuc lop co so de co the in nhan hieu label
};
Bus::Bus(int sd,string mk,float pe,int ll):Car(sd,mk,pe)
{
    label=ll;
}
int Bus::getlabel()
{
    return label;
}
void Bus::show()
{
    cout << "ten xe la " << getmark() << " toc do " << getspeed() << " co gia " << getprice() << " mang so hieu " << label << endl;
}
int main()
{
    Bus mybus(100,"toyota",8000,19);
    Car mycar(200,"honda",5000);
    mycar.show();
    mybus.Car::show();
    mycar=mybus;//chi gan duoc lop co so=lop dan xuat, nguoc lai bi sai
    mycar.show();
    mybus.show();
}