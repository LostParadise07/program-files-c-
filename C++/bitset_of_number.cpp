#include <iostream>
using namespace std;
int setbits(int n)
{
  int count=0;
  while(n>0)
  {
    int bit=n%2;
        n=n/2;
    if(bit==1)
    {
      count++;
    }
  }
  return count;
}
int main()
{
int n,m;
cout<<" value of n: ";
cin>>n;
cout<<" value of m: ";
cin>>m;
if(setbits(n)||setbits(m))
{
  cout<<setbits(n)+setbits(m);
}
  return 0;
}