#include<iostream>
using namespace std;
class salary{
private:
    int x,y;
public:
    //parameterized constructor
    salary(int x1, int y1)
{
    x=x1;
    y=y1;
}
int getx()
{
    return x;
}
int gety()
{
    return y;
}
};
int main(){
 salary s1(100000,178900);
 cout<< "s1.x= "<<s1.getx()<<endl<< "s1.y= "<<s1.gety();

return 0;
}
