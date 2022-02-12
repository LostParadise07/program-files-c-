#include <iostream>
using namespace std;
int arrmax(int arr[],int size)
{
	int i;
	int maxi=INT_MIN;
	for (  i = 0; i < size; i++)
	{
		maxi=max(maxi,arr[i]);
	}
	return maxi;
}
int arrmin(int arr[],int size)
{
	int i;
	int mini=INT_MAX;
	for (  i = 0; i < size; i++)
	{
		mini=min(mini,arr[i]);
	}
	return mini;
}
int main()
{
int arr[10];
int size;
cout<< "enter size of array : ";
cin>>size;
for (int  i = 0; i < size; i++)
{
	cout<<" the element "<<i+1<<" is "<<endl;
	cin>>arr[i];
}
cout<< " the elements are :"<<endl;
for (int  i = 0; i < size; i++)
{
	cout<<arr[i]<< " ";
}

cout<<endl<<" maximum element is " <<arrmax(arr,size)<<endl;
cout<<endl<<" minimum element is " <<arrmin(arr,size)<<endl;
	return 0;
}
