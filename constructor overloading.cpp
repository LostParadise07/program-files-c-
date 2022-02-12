#include<iostream>
using namespace std;
class money{
public:
    double salary;

    money()
    {
        salary=132800;
    }
    money(float a, float b)
    {
        salary=a*b;
    }
    void display()
    {
        cout<<salary<<endl;
    }
};
int main(){
money m1;
money m2(1000,120);
m1.display();
m2.display();

return 1;
}
