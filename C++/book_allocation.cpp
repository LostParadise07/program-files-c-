#include <iostream>
using namespace std;
bool ispossible(int arr[],int size, int m, int mid)
{
   int studentcount=1;
   int pagecount=0;
   for (int i = 0; i < size; i++)
   {
      if(pagecount+arr[i]<=mid)
      {
          pagecount+=arr[i];
      }
      else
      {
          studentcount++;
          if (studentcount>m || arr[i]>mid)
          {
              return false;
          }
          pagecount=arr[i];  
          }
      }
   return true;
}
int allocatebooks(int arr[],int size, int m)
{
    int start=0;
    int sum=0;
    for (int  i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if(ispossible(arr,size,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
int arr[5]={10,20,30,40,50};
cout<<allocatebooks(arr,5,2);
    return 0;
}