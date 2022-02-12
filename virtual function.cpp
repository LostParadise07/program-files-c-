#include<iostream>
using namespace std;
class base
{
public:
    int base_var=56;
    virtual void display()
    {
        cout<< "displaying base class variable "<<base_var<<endl;
    }
};
class derived:public base
{
public:
    int derived_var=767;
    void display()
    {
        cout<< "displaying base class variable "<<base_var<<endl;
        cout<< "displaying derived class variable "<<derived_var<<endl;
    }
};
int main()
{
    base * base_class_pointer;
    base obj1;
    derived obj2;

    base_class_pointer=&obj2;

    base_class_pointer->display();

    return 0;
}

