#include<iostream>
#include<fstream>
using namespace std;
int main(){
string name;
ofstream out;
out.open("b.txt");
cout<<"enter you name"<<endl;
cin>>name;
out<< name<< " is my name";
out.close();

return 0;
}
