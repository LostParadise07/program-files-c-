// CPP program to illustrate
// Class template with multiple parameters

#include<iostream>
using namespace std;

template<class T1, class T2>
class SUM
{
		T1 a;
		T2 b;
	public:
		SUM(T1 x, T2 y)
		{
			a = x;
			b = y;
		}
		void getdata()
		{
			cout << " enter the value of a "<<endl;
			cin>>a;
			cout << " enter the value of b "<<endl;
			cin>>b;
		}
		void putdata()
		{
		    cout<< "the sum is "<<a+b<<endl;
		}
};


int main()
{

	SUM <float, int> sum1 (1.23, 123);

	sum1.getdata();
	sum1.putdata();

	return 0;
}

