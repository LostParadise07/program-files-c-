#include <iostream>
using namespace std;
int binarysearch(int a[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end)
	{		
		if(a[mid]==key)
		{
			return mid;
		}
		else if (a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=(start+end)/2;
	}
	return -1;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<binarysearch(arr,5,3);
	return 0;
}
