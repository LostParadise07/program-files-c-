#include<iostream>
using namespace std;

class salary{
public:
   int a,b;
   // default constructor
   salary()
   {
       a=25000;
       b=78000;
   }
};
int main(){
salary c;
cout<<"a: "<<c.a<<endl<< "b: "<<c.b;

return 1;
}
