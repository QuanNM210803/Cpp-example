// #include<iostream> 
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> data{5,2,8,-1,10};
//     for(auto x:data)    //co the thay auto bang ten kieu du lieu nguyen thuy
//         cout << x << " ";
// }


//set 2 chieu
// #include<iostream> 
// #include<set>
// using namespace std;
// int main()
// {
//     set <set<int>> data{{5,-1},{3,6},{8,5,10},{7,-2}};
//     for(auto x:data)   //co the thay auto bang ten kieu du lieu nguyen thuy
//     {
//         for(auto y:x)
//             cout << y << " ";
//         cout << endl;
//     }
        
// }

//duyet set bang iterator
#include<iostream> 
#include<set>
using namespace std;
int main()
{
    set<int> data{5,2,8,-1,10};
    for(auto i=data.begin();i!=data.end();i++)    //co the thay auto bang ten kieu du lieu nguyen thuy hoac set<int>::iterator
        cout << *i << " ";
}