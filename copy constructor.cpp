#include<iostream>
using namespace std;
class salary{
public:
  int x;
  salary(int a)
  {
      x=a;
  }
  salary(salary&i)
  {
      x=i.x;
  }
};
int main(){
salary s1(34000);
salary s2(s1);
cout<< "salary s2 is " <<s2.x;

return 0;
}
