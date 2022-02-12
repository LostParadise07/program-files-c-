#include <iostream>
using namespace std;
int main()
{
	int n, k, a[10];
	int count = 0;
	cout << " enter the value of n " << endl;
	cin >> n;
	cout << "enter value of k " << endl;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		cout << "enter value of arr " << i << endl;
		cin >> a[i];
		if (a[i] % k == 0)
		{
			count++;
		}
	}
	cout << "the count is " << count;
}