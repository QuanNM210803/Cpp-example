#include"time3.cpp"
void changeM(Time &,const int);
int main()
{
    Time t;
    t.setH(17);
    t.setM(34);
    t.setS(25);
    cout << "Ket qua in ra lan 1: " << "\nhour: " << t.getH() 
         << "\nminute: " << t.getM() << "\nsecond: " << t.getS() << endl;
    t.setH(100);//cho gia tri qua pham vi se set ve 0
    t.setM(34);
    t.setS(8931);//cho gia tri qua pham vi se set ve 0
    cout << "Ket qua in ra lan 2: " << "\nhour: " << t.getH() 
         << "\nminute: " << t.getM() << "\nsecond: " << t.getS() << endl;
    t.setTime(11,58,0);
    changeM(t,3);
    return 0;
}
void changeM(Time &tt,const int count)
{
    cout << "\nThay doi thoi gian 3 lan:\n";
    cout << "Start time: ";
    tt.mui24();
    for(int i=0;i<count;i++)
    {
        tt.setM((tt.getM()+1)%60);
        if(tt.getM()==0)
        {
            tt.setM(0);
            tt.setH((tt.getH()+1)%24);
        }
        cout << "Lan " << i+1 << ": ";
        tt.mui12();
    }
}