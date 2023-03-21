class Time
{
    public:
        Time(int =0,int =0,int=0);
        void setTime(int,int,int);
        void setH(int);
        void setM(int);
        void setS(int);
        int getH();
        int getM();
        int getS();
        void mui24();
        void mui12();
    private:
        int hour,minute,second;
};;