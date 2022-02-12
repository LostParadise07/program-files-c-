#include <iostream>
using namespace std;
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void reverse(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<=end)
	{
	swap(arr[start],arr[end]);
	start++;
	end--;
	}
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,77,9};
cout<<endl<<" the reverse elements are "<<endl;
reverse(a,10);
print(a,10);


	return 0;
}
