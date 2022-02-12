#include<iostream>
#include<fstream>
using namespace std;
int main(){
string name;
ifstream in;
in.open("b.txt");
while(in.eof()==0)
{
 getline(in,name);
cout<<name<<endl;
}
return 0;
}
