#include<iostream>
using namespace std;

/*  function overloading is using function for multiple purposes
if we calculate volume of cube cuboid and cylinder we can use fct overloading
int volume(double r, float h)
{
   return 3.14*r*r*h;
}
 similarly for cube int volume(int a){
 return a*a*a;
 }
 similarly for cuboid

*/
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b,int c)
{
    return a+b+c;
}
int main(){
cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
cout<<"the sum of 3,5 and 6 is "<<sum(3,5,6)<<endl;

return 0;
}
