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
void alternate(int arr[],int size)
{
	for (int  i = 0; i < size; i+=2)
	{
		if(i+1<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
	
}
int main()
{
int a[10]={1,2,3,4,5,6,7,8,77,9};
cout<<endl<<" the alternate elements are "<<endl;
alternate(a,10);
print(a,10);


	return 0;
}
