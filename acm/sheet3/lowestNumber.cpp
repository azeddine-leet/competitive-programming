#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int i = 0, nb = 0, min = 0, index = 0;
	cin >> nb;
	int tmp[nb];
	for (i = 0; i < nb; i++)
	{
		cin >> tmp[i];
		if (i == 0)
		{
			min = tmp[i];
			index = i;
		}
		else if (min > tmp[i])
		{
			min = tmp[i];
			index = i;
		}
	}
	cout << min << " " << index + 1;
	return (0);
}
