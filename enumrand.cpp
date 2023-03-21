#include<iostream>
using namespace std;
#include<ctime>
int roll()
{
    int r1,r2;
    r1=1+rand()%6;
    r2=1+rand()%6;
    cout << "POINT IS " << r1+r2 << endl;
    return r1+r2;
}
int main()
{
    enum start{CON,WIN,LOST};
    start kq;
    int sum;
    int mysum;
    srand(time(0));
    /*ham srand de moi lan chay code ham rand se rand kq khac nhau neu doi so trong srand la bien so,
    neu doi so trong srand la hang so thi kq cua rand ko doi. NOTE: srand de dc cac chuoi ngau nhien khac nhau,
    doi so trong srand goi la hat giong, hat giong giong nhau thi rand cho kq giong nhau*/
    sum=roll();
    switch(sum)
    {
        case 7:
        case 11:
            kq=WIN;
            break;
        case 2:
        case 3:
        case 12:
            kq=LOST;
            break;
        default:
            kq=CON;
            mysum=sum;
            break;
    }
    while(kq==CON)
    {
        cout << "CONTINUE: " ;
        sum=roll();
        if(sum==7)
            kq=LOST;
        else if(sum==mysum)
            kq=WIN;
    }
    if(kq==WIN)
        cout << "MY WIN" << endl;
    else
        cout << "MY LOSE" << endl;
}