#include <iostream>
using namespace std;
int bitsets(int n)
{
	int sum=0;

		while(n>0)
	{
		int bit=n%2;
		sum=sum+bit;
		n=n/2;
	}
	if(sum==1)
	{
		cout<<" this number is power of 2"<<endl;
	}
	else
	{
		cout<<"this is not power of 2 "<<endl;
	}
	
	return sum;
}

int main()
{
int num;
cout<< "enter value of number : ";
cin>>num;
cout<<bitsets(num);


	return 0;
}
