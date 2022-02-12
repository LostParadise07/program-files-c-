#include<iostream>
using namespace std;
int main(){
int i,n,first=0,second=1,sum=1,third;
cout<<"ENTER THE Nth TERM  "<<endl;
cin>>n;
for(i=2;i<=n;i++)
{
    third=second+first;
    sum=sum+third;
    first=second;
    second=third;
}
cout<<"the sum of fabonacchi series is "<<sum<<endl;
return 0;
}
