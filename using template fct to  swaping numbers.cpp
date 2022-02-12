#include <iostream>
using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int x1 = 6, y1 = 3;
    float x2 = 7.2, y2 = 4.5;
    char x3 = 'a', y3 = 'b';

    cout << "Before swapping \n";
    cout<< "integer values"<<endl;
    cout << "x1 = " << x1 << "\ny1= " << y1<<endl;
    cout<<endl;
    cout<< "float values"<<endl;
    cout << "\nx2 = " << x2<< "\ny2= " << y2<<endl;
    cout<< "character values"<<endl;
    cout<<endl;
    cout << "\nx3 = " << x3 << "\ny3 = " << y3<<endl;

    Swap(x1, y1);
    Swap(x2, y2);
    Swap(x3, y3);

    cout << "\n\nAfter swapping \n";
     cout<< "integer values"<<endl;
    cout << "x1 = " << x1<< "\ny1 = " << y1<<endl;
    cout<<endl;
   cout<< "float values"<<endl;
    cout << "\nx2 = " << x2 << "\ny2 = " << y2<<endl;
    cout<< "character values"<<endl;
    cout<<endl;
    cout << "\nx3 = " << x3 << "\ny3 = " << y3<<endl;

    return 0;
}
