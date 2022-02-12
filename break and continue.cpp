#include<iostream>
using namespace std;
int main(){
    int i;
   /* for(i=0;i<=7;i++)
    {
        if(i==2){
        break;
        }
         cout<<i<<endl;
    }*/
    for(i=0;i<=7;i++)
    {
        if(i==2){
        continue;
        }
         cout<<i<<endl;
    }
    return 0;
}
