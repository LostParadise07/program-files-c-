#include <iostream>
#include <vector>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int> &v,vector <int> &arr,int n,int k,int i){

if(k==0)
ans.push_back(v);

if (i>=n)
{
    return;
}

for (; i < n; i++)
{
   v.push_back(arr[i]);
   solve(ans,v,arr,n,k-arr[i],i+1);
   v.pop_back();
}

}

vector<vector<int>> sumtok(vector <int> &arr,int n,int k){

    vector<vector<int>> ans;
    vector<int> v;
    solve (ans,v,arr,n,k,0);
    return ans;
}

void print(vector <int> arr,int n)
{

    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

vector <int> arr={1,2,3,4,5,6};
int n=6;
int k=5;
sumtok(arr,n,k);
print(arr,n);
}