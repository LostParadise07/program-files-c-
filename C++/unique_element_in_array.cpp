#include <iostream>
using namespace std;
int  unique(int arr[],int size)
{
	int ans =0;
	for (int  i = 0; i < size; i++)
	{
		ans=ans^arr[i];
	}
	return ans;
}
int main()
{
int a[9]={1,2,1,2,1,2,67,1,2};
cout<<endl<<" the unique elements is "<<endl;
cout<<endl<<unique(a,9);



	return 0;
}
