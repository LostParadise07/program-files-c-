#include <iostream>
using namespace std;


template <typename T>
T SUM (T x, T y)
{
return x+y;
}

int main()
{
cout << SUM<int>(3, 7) << endl;
cout << SUM<double>(3.60, 7.30) << endl;
cout << SUM<double>(7.66,7.99) << endl;

return 0;
}
