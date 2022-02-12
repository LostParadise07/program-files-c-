#include<iostream>
using namespace std;
class father{
protected:
   string  surname;
public:
    string name;
    void getdata(void);
    void putdata(void);
};
void father ::getdata(void){
cout<< "enter Father's name:"<<endl;
cin>>name;
cout <<"enter surname :"<<endl;
cin>>surname;
}
class son: public father
{
public:
    string name;
    void getdata(void);
    void putdata(void);
};
void son ::getdata(void){
cout<< "enter Son's name:"<<endl;
cin>>name;
cout <<"enter surname :"<<endl;
cin>>surname;
}
void father::putdata(void){
cout<<endl<< "Father's Name : "<<name<<endl<< "Surname : "<<surname<<endl;
}
void son::putdata(void){
cout<< "Son's Name : "<<name<<endl<<"Surname : "<<surname<<endl;
}
int main(){
father f;
son  s;
f.getdata();
s.getdata();
f.putdata();
s.putdata();

return 0;
}
