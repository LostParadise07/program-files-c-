#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int Roll_no;
    string sex;
public:
    void getdata(void);
    void putdata(void);
};
void student::getdata(void){
cout<<"Enter name of student: "<<endl;
cin>>name;
cout<< "Enter Roll no :"<<endl;
cin>>Roll_no;
cout<< "sex :"<<endl;
cin>>sex;
}
class physical_fit : public student
{
public:
    int height;
    int weight;
    void getdata(void);
    void putdata(void);
};
void physical_fit::getdata(void){
cout<< "HEIGHT in cm:"<<endl;
cin>>height;
cout<< "WEIGHT in kg"<<endl;
cin>>weight;
}
void student :: putdata(void)
{
    cout<<endl<< "Student details"<<endl;
    cout<< "Name: "<<name<<endl<< "Roll no: "<<Roll_no<<endl<< "sex: "<<sex<<endl;
}
void physical_fit :: putdata(void)
{
     cout<<"Height:"<<height<<endl<< "weight: "<<weight<<endl;
}

int main(){
student std;
physical_fit phy;
std.getdata();
phy.getdata();
std.putdata();
phy.putdata();

return 0;
}
