#include<iostream>
using namespace std;
class first{
public:
    float a;
};
class second:public first{
public:
    second(){
    a=3;
    }
};
class third{
public:
    double b;
    third(){
    b=5;
    }
};
class fourth:public second, public third{
public:
    void product(){
    cout<< "product = "<<a*b<<endl;
    }
};
int main(){
fourth p;
p.product();
return 0;
}
