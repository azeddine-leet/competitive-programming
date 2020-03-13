#include <iostream>
#include <cmath>
using namespace std;
int		main()
{
	long long x = 0;
	cin >> x;
	for (long long i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
	return (0);
}
