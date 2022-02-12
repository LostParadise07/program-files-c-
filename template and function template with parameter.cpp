#include<iostream>
using namespace std;
template<class T1, class T2>
float average(T1 a, T2 b)
{
    float avg=(a+b)/2;
    return avg;
}
int main(){
 float  a;
 a=average(2.2,4);
cout<< "the average of the numbers is "<<a<<endl;
return 0;
}
