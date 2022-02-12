#include<iostream>
using namespace std;
int fabonacchi(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fabonacchi(n-1)+fabonacchi(n-2);
}
int main(){
int n;
cout<<"ENTER THE NUMBER "<<endl;
cin>>n;
cout<<"the fabonacchi at "<<n<< " is "<<fabonacchi(n)<<endl;

return 0;
}
