#include<iostream>
using namespace std;
class base
{
public:
    int base_var;
    void display()
    {
        cout<< "displaying base class variable "<<base_var<<endl;
    }
};
class derived:public base
{
public:
    int derived_var;
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
    base_class_pointer->base_var=44;
    base_class_pointer->display();

    derived*derived_class_pointer;
    derived_class_pointer=&obj2;
    derived_class_pointer->base_var=43;
    derived_class_pointer->derived_var=455;
    derived_class_pointer->display();
    return 0;
}
