#include<iostream>
using namespace std;
class simple{
int data1;
int data2;
int data3;

public:
    simple(int a, int b , int c=4){
    data1=a;
    data2=b;
    data3=c;
    }
    void display(){
    cout<< " the data values are "<<data1<< ","<<data2<< "and"<<data3<<endl;
    }
};
int main(){
simple a(33,44,22);
a.display();

simple b=simple(22,42);
b.display();
return 0;
}
