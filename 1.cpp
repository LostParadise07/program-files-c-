#include <iostream>
#include <vector>
#include <algorithm>
int setbits(int num)
    {
        int count=0;
        while(num>0)
        {
            int digit=num%2;
            if(digit==1)
            {
                count++;
            }
            num=num/2;
        }
        return count;
    }
using namespace std;
int main()
{
int num=9;
cout<<setbits(num);
    return 0;
}
