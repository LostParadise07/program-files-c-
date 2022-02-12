#include<iostream>
using namespace std;
class first{
public:
    int a=965000;
};
class second{
public:
    int b=765000;
};
class third: public first,public second{
public:
    void display(void){
    cout<< " the sum is "<<a+b<<endl;
    }
};
int main(){
third sum;
sum.display();
return 0;
}
