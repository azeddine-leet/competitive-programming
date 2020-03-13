#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int nb = 0, i = 0;
	cin >> nb;
	long long arr[nb], x;
	for (i = 0; i < nb; i++)
		cin >> arr[i];
	cin >> x;
	for (i = 0; i < nb ; i++)
	{
		if (arr[i] == x)
		{
			cout << i;
			return (0);
		}
	}
	cout << -1;
	return (0);
}
