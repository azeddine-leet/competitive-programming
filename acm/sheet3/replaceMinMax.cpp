#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0, i = 0, tab[1000] = {0}, minIndex = 0, maxIndex = 0;
	cin >> n;
	int min = INT_MAX;
	int max = INT_MIN;
	for (i = 0; i < n; i++)
	{
		cin >> tab[i];
		if (tab[i] < min)
		{
			minIndex = i;
			min = tab[i];
		}
		if (tab[i] > max)
		{
			maxIndex = i;
			max = tab[i];
		}
	}
	int tmp = tab[minIndex];
	tab[minIndex] = tab[maxIndex];
	tab[maxIndex] = tmp;
	for (i = 0; i < n; i++)
	{
		cout << tab[i];
		if (i < n - 1)
			cout << ' ';
	}
	return (0);
}
