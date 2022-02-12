#include<iostream>
using namespace std;

/* if we declare sum at last then fct will not be executed instead we can declare sum
 before int main() */

 //function prototype
int sum(int a,int b);   // a, b are formal parameters

//int sum(int a,int b){
//int c=(a+b);
//return c;
//}
int main(){
int num1,num2;     // num1 and num are actual parameters
cout<<"ENTER THE VALUE OF NUM1 "<<endl;
cin>>num1;
cout<<"ENTER THE VALUE OF NUM2 "<<endl;
cin>>num2;
cout<<"THE SUM OF "<<num1<<" and "<<num2<<" is"<<sum(num1,num2);
return 0;
}
int sum(int a,int b){
int c=(a+b);
return c;
}

