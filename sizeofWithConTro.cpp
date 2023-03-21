#include<iostream>
using namespace std;
int point(double *ptr)
{
    return sizeof(ptr);
    //tra ve kich thuoc con tro, neu sizeof(*ptr) thi se tuong duong tra ve kich thuoc double
}
int main()
{
    double arr[20];
    cout << "Size of arr: " << sizeof(arr) << endl;
    cout << "Size of point: " << point(arr);
}