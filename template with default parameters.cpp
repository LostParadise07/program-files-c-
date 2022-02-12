#include<iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>
class ASRAR
{
public:
    T1 a;
    T2 b;
    T3 c;
    ASRAR(T1 x, T2 y, T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<< "the value of a is "<<a<<endl;
        cout<< "the value of b is "<<b<<endl;
        cout<< "the value of c is "<<c<<endl;
    }
};
int main(){
ASRAR<> A(4,6.3,'f');
A.display();
cout<<endl;
ASRAR<float,char,char> B(4.4,'d','g');
B.display();
return 0;
}
