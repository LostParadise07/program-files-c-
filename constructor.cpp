#include<iostream>
using namespace std;
class complex{
int a,b;
public:
    // invoking constructor
    complex(void);
void printnumber()
{
    cout<<endl<< "the sum is "<<a<<" + "<<b<< "i"<<endl;
}
} ;
complex::complex(void){
a=20;
b=10;
//we can print anything through constructor
cout<< " hello world\n";
}
int main(){
 /*   hello world would be printed as many times as we
  define constructor
here we defined it twice as c1 and c2
*/
complex c1,c2;
c1.printnumber();
c2.printnumber();
return 0;
}
