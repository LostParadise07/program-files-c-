#include<iostream>
using namespace std;
 inline int product(int a,int b){
    // static int c=0; excutes programme the number of times we call fct. and can not be used with inline.
    // c=c+2


     // for constant arguments we have syntex int character(const char*10)
return a*b;
}
float moneyrecieved(int currentmoney, float intrestfactor=1.04){
return currentmoney*intrestfactor;
}
int main(){
    int a,b;
    int money=100000;
/*  cout<<"value of a " <<endl;
cin>>a;
cout<<"value of b " <<endl;
cin>>b;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;   */
cout<<"the value of "<<money<<"after one year is "<<moneyrecieved(money)<<endl;
cout<<"for some people value of "<<money<<" after one year is "<<moneyrecieved(money,1.09)<<endl;
cout<<"for VIP value of "<<money<<" after one year is "<<moneyrecieved(money,1.59)<<endl;
return 0;
}
