#include<iostream>
using namespace std;

class Employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1,int b1, int c1); // DECELERATION
    void getData()
  {
        cout<< "the value of a is "<<a<<endl;
        cout<< "the value of b is "<<b<<endl;
        cout<< "the value of c is "<<c<<endl;
        cout<< "the value of d is "<<d<<endl;
        cout<< "the value of e is "<<e<<endl;
    }

};
void Employee ::setData (int a1, int b1, int c1){
a=a1;
b=b1;
c=c1;
}
int main(){
Employee asrar;

 //  asrar.a=1;   this will show error as this is private data
asrar.d=45;
asrar.e=56;
asrar.setData(1,2,3);
asrar.getData();

return 0;
}
