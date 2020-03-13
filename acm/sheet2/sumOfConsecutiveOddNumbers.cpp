#include <iostream>
using namespace std;

long	sumOfConOddNum(int a, int b)
{
	long long  sum = 0;
   	int swap = 0;
	if (b < a)
	{
		swap = a;
		a = b;
		b = swap;
	}
	for (int i = a + 1 ; i < b; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}
	return (sum);
}

int		main()
{
	int t = 0, x = 0, y = 0;
	cin >> t;
	long long tab[t];
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		tab[i] = sumOfConOddNum(x, y);
	}
	for (int i = 0; i < t; i++)
		cout << tab[i] << endl;
	return (0);
}
