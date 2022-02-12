#include <iostream>
using namespace std;
int prime(int m)
{
  
	  for (int  j = 2; j < m; j++)
	  {
	    if(m%j==0)
		{
			return 0;
		}
	  }
	  return 1;
  
}
int main()
{
 int m,n;
 cout<<"enter value of m"<<endl;
 cin>>m;
 cout<<"enter value of n"<<endl;
 cin>>n;
 cout<<" the prime numbers in range of "<<m<<" and "<<n<<"  is"<<endl;
 for(int i=m+1;i<n;i++)
 {
 if(prime(i))
 {
	 cout<<i<<" ";
 }
 }
	return 0;
}
