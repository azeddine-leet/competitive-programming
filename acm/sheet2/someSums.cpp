#include <iostream>
using namespace std;

int sum_digit(int digit, int a, int b)
{
	long long  sum = 0;
	while (digit)
	{
		sum = sum + digit % 10;
		digit = digit / 10;
	}
	if (sum >= a && sum <= b)
		return (1);
	else 
		return (0);
}

int		main()
{
	long long sum = 0, n = 0, a = 0, b = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		if (sum_digit(i, a, b) == 1)
			sum += i;
	}
	cout << sum << endl;
	return (0);
}
