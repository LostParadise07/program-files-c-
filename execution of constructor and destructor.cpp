#include<iostream>
using namespace std;
class parent{
public:
    parent()
    {
    cout<< "parent class constructor"<<endl;
    }
    ~parent()
    {
        cout<<"parent class destructor"<<endl;
    }
};
class child: public parent
{
public:
    child()
    {
        cout<< "child class constructor"<<endl;
    }
    ~child()
    {
       cout<<"child class destructor"<<endl;
    }
};
class derivedchild: public child
{
public:
    derivedchild()
    {
        cout <<"derivedchild constructor"<<endl;
    }
    ~derivedchild()
    {
       cout <<"derivedchild destructor"<<endl;
    }
};
int main(){
derivedchild c1;


return 0;
}
