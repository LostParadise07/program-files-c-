// destructor

#include<iostream>
using namespace std;
class salary{
private:
    int x,y;
public:
    salary(int x1,int y1)
    {
        cout<< "constructor invoked"<<endl;
        x=x1;
        y=y1;
    }
    void display()
    {
        cout<< "x = "<<x<<endl;
        cout<< "y = "<<y<<endl;
    }
    ~salary()
    {
        cout<< "destructor invoked"<<endl;
    }
};
int main()
{
    salary s1(10000,234511);
    s1.display();
    return 0;
}
