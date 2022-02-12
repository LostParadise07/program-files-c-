#include<iostream>
using namespace std;
class base
{
public:
    void display(void){
    cout<< " base class "<<endl;
    }
};
class derived_from_base: public base{};

class derived_from_derived_from_base:public derived_from_base{};

int main(){
derived_from_derived_from_base obj;
obj.display();
return 0;
}
