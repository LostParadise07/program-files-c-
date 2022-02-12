#include<iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float rate;
    float returnvalue;
public:
    bankdeposit() {}
    bankdeposit(int p,int y, float r);
    bankdeposit(int p,int y, int r);
    void show();

};
bankdeposit::bankdeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    rate=r;
    returnvalue=p;
    for(int i=0; i<y; i++)
    {
        returnvalue=returnvalue*(1+rate);
    }
}

bankdeposit::bankdeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    rate=float(r)/100;
    returnvalue=p;
    for(int i=0; i<y; i++)
    {
        returnvalue=returnvalue*(1+rate);
    }
}
void bankdeposit :: show()
{
    cout<<" the value of principal amount is" <<principal<<endl<<" the time is "<<years<<endl
        << " the rate is " <<rate<< " and the return value is "<<returnvalue<< endl;
}
int main()
{
    bankdeposit b1,b2;
    int p,y;
    float r;
    int R;
    cout<< "enter the value of p , y , r "<<endl;
    cin>>p>>y>>r;
    b1 = bankdeposit(p,y,r);
    b1.show();

    cout<< "enter the value of p , y , R "<<endl;
    cin>>p>>y>>R;
    b2 = bankdeposit(p,y,R);
    b2.show();
    return 0;
}
