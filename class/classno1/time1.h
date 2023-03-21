#ifndef TIME1_H
#define TIME1_H
class Time
{
    public:
        Time();
        void mui12();
        void mui24();
        void setTime(int ,int ,int);
    private:
        int hour;
        int minute;
        int second;
};;
#endif