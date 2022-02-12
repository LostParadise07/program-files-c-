//Q2 write a program in c++ to implement data conversion between class type and basic data type
#include<iostream>
#include<conio.h>
using namespace std;
class time{
int hrs,mins;
public:
    time (int,int);
    operator int();
    ~time()
    {
        cout<<"Destructor is called "<<endl;
    }
};
time:: time(int x,int y)
{
    hrs=x;
    mins=y;
}
time::operator int()
{
    cout<< "Class type ==> data type"<<endl;
    return (hrs*60+mins);
}
void typeconversion(int hour, int mins)
{
    int duration;
    time t(hour, mins);
    duration =t;
    cout<< "Total minutes are "<<duration<<endl;
    cout<< "using overloading "<<endl;
    duration=t.operator int();
    cout<< "total minutes are "<<duration<<endl;
    return;
}
int main()
{
    int hour,mins;
    cout<< "enter the value of hour "<<endl;
    cin>>hour;
    cout<< "enter the value of minutes "<<endl;
    cin>>mins;
    typeconversion(hour, mins);
    return 0;
}
