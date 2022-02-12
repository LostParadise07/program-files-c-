#include <iostream>
using namespace std; 

void reverse(string &st,int s,int e){

    if(s>e)
    return;

    swap(st[s],st[e]);

    reverse(st,s+1,e-1);
}
int main(){
 string name = "asrar";
 reverse(name,0,name.length()-1);
 cout<<name;
    return 0;
}