#include<iostream>
using namespace std;
int main(){
// pointer is data type which holds value of other data type
int a=45;
int* b=&a;
// & is address of operator
// * id derefrence opperator
cout<<b<<endl;
cout<<&a<<endl;
cout<<*b<<endl;
int**c=&b;   // pointer to pointer
cout<<&b<<endl;
cout<<*c<<endl;
cout<<**c<<endl;
return 0;
}
