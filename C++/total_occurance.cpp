#include <iostream>
using namespace std;
int firstoccurance(int a[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans;
	while(start<=end)
	{		
		if(a[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if (a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;;
	}
	return ans;
}
int lastoccurance(int a[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans;
	while(start<=end)
	{		
		if(a[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if (a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int arr[6]={1,3,3,3,4,5};
	cout<<firstoccurance(arr,6,3)<<endl;
	cout<<lastoccurance(arr,6,3)<<endl;
	int totaloccurance=lastoccurance(arr,6,3)-firstoccurance(arr,6,3)+1;
    cout<<" total occurance is "<<totaloccurance;
	return 0;
}
