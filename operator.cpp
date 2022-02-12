#include<iostream>

using namespace std;
int main(){
    int a=5,b=10;
    cout<<"operators in c++:\n";
    cout<<"\nthe value of a+b is "<<a+b;
    cout<<"\nthe value of a-b is "<<a-b;
    cout<<"\nthe value of a*b is "<<a*b;
    cout<<"\nthe value of a/b is "<<a/b;
    cout<<"\nthe value of a%b is "<<a%b;
    cout<<"\nthe value of a++ is "<<a++;
    cout<<"\nthe value of a-- is "<<a--;
    cout<<"\nthe value of ++a is "<<++a;
    cout<<"\nthe value of --a is "<<--a;
    cout<<endl;
    //comparison operator
    cout<<"\nthe comparision operator are";
    cout<<"\nThe value of a==b is "<<(a==b);
    cout<<"\nThe value of a!=b is "<<(a!=b);
    cout<<"\nThe value of a>=b is "<<(a>=b);
    cout<<"\nThe value of a<=b is "<<(a<=b);
    cout<<"\nThe value of a<b is "<<(a<b);
    cout<<"\nThe value of a>b is "<<(a>b);
    cout<<endl;
    //logical operator
    cout<<"\nthe logical operators are";
    cout<<"\nthe value of logical and operator ((a==b) && (a<=b)) is "<<((a==b) && (a<=b));
    cout<<"\nthe value of logical and operator ((a==b) && (a>=b)) is "<<((a==b) && (a>=b));
    cout<<"\nthe value of logical or operator ((a==b) || (a>=b)) is "<<((a==b) || (a>=b));
    cout<<"\nthe value of logical or operator ((a==b) || (a<=b)) is "<<((a==b) || (a<=b));
    cout<<"\nthe value of logical not operator (!(a==b)) is "<<(!(a==b));

    return 0;
}
