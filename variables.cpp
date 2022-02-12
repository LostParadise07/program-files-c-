#include<iostream>
#include<cmath>
using namespace std;
int c=30;
int main(){
    // ***********built in data types
//int a,b,c;
//cout<<"enter the value of a: \n";
//cin>>a;
//cout<<"enter the value of b: \n";
//cin>>b;
//c=a+b;
//cout<<"the sum is "<<c;
//cout<<"\nthe global value of c is " <<::c <<endl; //:: is scope resolution operator to determine value of global variable.

// *********** float, double , and long double literals
//float d=5.77;
//long double e=5.77;
//cout<<"the value of d is "<<d <<endl << "the value of e is "<<e <<endl;
//cout<<"\nThe size of 5.77 is "<<sizeof(5.77);  // 5.77 is double.
//cout<<"\nThe size of 5.77f is "<<sizeof(5.77f); //f and F are float
//cout<<"\nThe size of 5.7F is "<<sizeof(5.77F);
//cout<<"\nThe size of 5.77l is "<<sizeof(5.77l); //L and l are long double.
//cout<<"\nThe size of 5.77L is "<<sizeof(5.77L);

 // ***********Reference variables
 // reference variables are one and the same thing . used to define same variable.
 //float f=90;
 //float & g=f;
 //cout<<"the value of f is "<<f<<endl;
 //cout<<" the value of g is "<<g<<endl;

// ***********Type casting. That is changing one variable into another
int h=23.88;
float i=23.88;
cout<<"the value of h is "<<(float)h<<endl;
cout<<"the value of h is "<<float(h)<<endl;
cout<<"the value of i is "<<(int)i<<endl;
cout<<"the value of i is "<<int(i)<<endl;
int j=int(i);
cout<<"the value of expression is "<<h+i<<endl;
cout<<"the value of expression is "<<h+(int)i<<endl;
cout<<"the value of expression is "<<h+int(i)<<endl;
return 0;
}
