#include<iostream>
using namespace std;
int main(){
    int i=0;
    int arr[5]={3,45,56,78,454};
        arr[2]=776;
//  cout<<arr[0]<<endl;
//cout<<arr[1]<<endl;
//  cout<<arr[2]<<endl;
//  cout<<arr[3]<<endl;
// cout<<arr[4]<<endl;
//for (int i=0;i<5;i++)
   /* {
    cout<<"the value of marks  " <<i<<" is "<<arr[i]<<endl;
}*/
/*while(i<5){
     cout<<"the value of marks  " <<i<<" is "<<arr[i]<<endl;
     i++;
}
*/
do {
   cout<<"the value of marks  " <<i<<" is "<<arr[i]<<endl;
     i++;
}
while (i<5);

int*p=arr;
for(i=0;i<5;i++){
    cout<<"the data in "<<"arr"<<"["<<i<<"]"<<"is"<<*(p+i)<<endl;
}



return 0;
}
