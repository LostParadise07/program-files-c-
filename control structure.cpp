#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"TELL ME YOUR AGE"<<endl;
    cin>>age;
    //if (age<18){
      //  cout<<"YOU ARE NOT ALLOWED IN PARTY"<<endl;

    //}
    //else if (age==18){
      //  cout<<"YOU ARE KID AND WILL GET KID PASS"<<endl;

    //}
    //else {
      //  cout<<" you can come to party"<<endl;
    //}

    //switch case
    switch (age)
    {
        case 18:
        cout<<"you are 18"<<endl;
        break;
        case 22:
        cout<<"you are 22"<<endl;
        break;
        case 24:
        cout<<"you are 24"<<endl;
        break;
        default:
            cout<<"you do not meet special criteria"<<endl;
    }
    return 0;
}
