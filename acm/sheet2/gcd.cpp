#include <iostream>
using namespace std;
int		gcd(int a, int b)
{
	int c = 0;
	while (b != 0)
	{
		if (a%b == 0)
		    return (b);
		else 
		{

			c  = a;
			a = b; 
			b = c % b;
		}
	}
	return (10);
}

int		main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << gcd(a, b) << endl;
	else
		cout << gcd(b, a) << endl;
	return (0);
}
