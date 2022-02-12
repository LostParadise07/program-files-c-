#include<iostream>
using namespace std;
class complex{
int a,b;
public:
    // parameterise constructor
    complex(int , int );
    void print()
    {
    cout<<" the sum of numbers is "<<a<< "+"<<b<< "i"<<endl;
    }
};
complex :: complex(int x, int y)
{
a=x;
b=y;
}
int main(){
//implict call
complex a(4,5);
a.print();
// Explict call
complex b=complex(2,5);
b.print();

return 0;
}
