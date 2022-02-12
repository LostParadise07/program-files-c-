#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
//factorial of number
//6!=6*5*4*3*2*1

int n;
cout<<"ENTER THE NUMBER "<<endl;
cin>>n;
cout<<"the factorial of "<<n<< " is "<<factorial(n)<<endl;
return 0;
}
