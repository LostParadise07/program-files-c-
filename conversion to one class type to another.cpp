//Q3 write a program in c++ to implement data conversion between one class type and another class type
#include<iostream>
#include<conio.h>
using namespace std;
class minute{
public:
    int mins;
    minute()
    {
        mins=0;
    }
    void show()
    {
        cout<< "\n total minutes :"<<mins<<endl;
    }
};
class time{
int hr,mins;
public:
    time(int h,int m)
    {
        hr=h;
        mins=m;
    }
    time()
    {
        cout<< "\n time's object created ";
    }
    operator minute()
    {
        minute m;
        m.mins=(hr*60)+mins;
        return m;
    }
    void show()
    {
        cout<< " Hour :"<<hr<<endl;
        cout<< " minute :"<<mins<<endl;
    }
};
int main()
{
    int a,b;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    time t1(a,b);
    minute m;
    m=t1;
    t1.show();
    m.show();
    return 0;
}
