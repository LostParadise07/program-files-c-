#include<iostream>
#include<string>

using namespace std;

class binary{
string s;
public:
    void read(void);
    void chk_bin(void);
    void compliment(void);
    void display();
};
void binary :: read(void){
cout<< "ENTER THE BINARY NUMBER "<<endl;
cin>>s;
}
void binary ::chk_bin(void){
for (int i=0;i<s.length();i++){
    if(s.at(i)!='0'&& s.at(i)!='1'){
        cout<< "INCORRECT BINARY FORMAT "<<endl;
        exit (0);
    }
}
}
void binary::compliment(void){
for(int i=0;i<s.length();i++){
if(s.at(i)=='0'){
    s.at(i)='1';
}
else
{
    s.at(i)='0';
}
}
}
void binary::display(void){
    cout<< "DISPLAYING THE NUMBERS "<<endl;
for(int i=0;i<s.length();i++){
    cout<<s.at(i);
}
cout<<endl<<endl;
}
int main(){
binary b;
b.read();
b.chk_bin();
cout<< "THIS IS CORRECT FORMAT OF BINARY NUMBERS "<<endl<<endl;
cout<< " BINARY NUMBERS BEFORE COMPLIMENT "<<endl;
b.display();

b.compliment();
cout<< "BINARY NUMERS AFTER COMPLIMENT "<<endl;
b.display();


return 0;
}
