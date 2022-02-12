//Q1 write a program in c++ to implement data conversion between basic data type and class type
#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    int hrs,min;
public:
    time(int);
    void display();
};
time :: time(int t)
{
    cout<< "Basic type to ==> class type conversion "<<endl;
    hrs=t/60;
    min =t%60;
}
void time::display()
{
    cout<<hrs<< ":Hours "<<endl;
    cout<<min<< "Minutes"<<endl;
}
int main(){
int duration;
cout<< "Enter time duration in minutes ";
cin>>duration;
time t1=duration;
t1.display();
getch();

return 0;
}
