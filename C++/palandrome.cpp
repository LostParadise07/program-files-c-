#include <iostream>
using namespace std;
int main()
{
int n,rem,m;
static int reverse;
cout<<"enter n"<<endl;
cin>>n;
m=n;
while (n!=0)
{
	rem=n%10;
	reverse=reverse*10+rem;
	n/=10;
}
cout<<"the reverse is "<<reverse<<endl;
	if(m==reverse)
	{
		cout<<"the number is palandome";
	}
	else
	{
		cout<<"the number is not palandome";
	}
}