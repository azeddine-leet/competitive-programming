#include <iostream>
#include <cmath>
using namespace std;

int		if_prime(long long nbr)
{
	for (long long i = 2; i <= sqrt(nbr); i++)
	{
		if (nbr % i == 0)
			return (0);
	}
	return (1);
}

int		main()
{
	int n = 0, k = 0;
	cin >> n;
	char ret[n];
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (if_prime(k) == 0)
			ret[i] = 'N';
		else
			ret[i] = 'P';
	}
	for (int i = 0; i < n; i++)
	{
		if (ret[i] == 'P')
			cout << "Prime" << endl;
		else if (ret[i] == 'N')
			cout << "Not" << endl;
	}
	return (0);
}
