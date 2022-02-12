#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cout << "the value of n is " << endl;
    cin >> n;
    bitset<32> x(n);
    cout << "the binary form of this number is " << x;
}