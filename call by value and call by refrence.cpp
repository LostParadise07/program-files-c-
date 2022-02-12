#include<iostream>
using namespace std;
int sum(int a, int b){
int c=a+b;
return c;
}
/*void swap(int a, int b){
int temp=a;
a=b;
b=temp;
}
*/

// we can not swap values directly we have to use pointer fct to swap fct

//swap by refrence

/*void swapref(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}
*/

// using refrence variables

void swapvar(int &a, int &b){
int temp=a;
a=b;
b=temp;
}

int main(){
    int a=5, b=7;
cout<<"the sum of a and b is "<<sum(a,b)<<endl;
/*cout<<"the value of a is "<<a<<endl<<"the value of b is "<<b<<endl;
swap(a,b);
swapref(&a,&b);
cout<<"the value of a using refrence  "<<a<<endl<<"the value of b is "<<b<<endl;

*/
swapvar(a,b);
cout<<"the value of a using refrence  variables "<<a<<endl<<"the value of b is "<<b<<endl;
return 0;
}
