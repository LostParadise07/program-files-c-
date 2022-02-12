#include<iostream>
using namespace std;

class c2;

class c1{
int val1;
public:
    friend void swap(c1 &, c2 &);

    void indata(int a){
    val1=a;
    }
    void display(void){
    cout<<val1<<endl;
    }
};

class c2{
int val2;
public:
    friend void swap(c1 &, c2 &);

    void indata(int a){
    val2=a;
    }
    void display(void){
    cout<<val2<<endl;
    }
};

void swap(c1&x,c2&y){
int temp=x.val1;
x.val1=y.val2;
y.val2=temp;
}
int main(){
c1 oc1;
c2 oc2;
oc1.indata(44);
oc2.indata(42);
swap(oc1,oc2);
cout<< "the c1 after swapping becomes";
oc1.display();
cout<< "the c2 after swapping becomes";
oc2.display();
return 0;
}
