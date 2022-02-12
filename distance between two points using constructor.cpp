#include<iostream>
#include<math.h>
using namespace std;

class point
{
    int x,y;
public:
    friend void distance(point,point);

    point(int a, int b);
    void display()
    {
        cout<< " the point is "<<x<< " and "<<y<<endl;
    }
};
point:: point(int a, int b)
{
    x=a;
    y=b;
}
void distance(point p1, point p2)
{
    float result=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    cout<< "the distance between two points is "<<result<<endl;
}
int main()
{
    /* int x1,y1;
     int x2,y2;
     cout<< "Enter the value of x1 and y1 is  "<<endl;
     cin>>x1>>y1;

     cout<<" Enter the value of x2 and y2 "<<endl;
     cin>>x2>>y2;
     */
    point p1(1,1);
    p1.display();
    point p2(1,1);
    p2.display();
    distance(p1,p2);
    return 0;
}
