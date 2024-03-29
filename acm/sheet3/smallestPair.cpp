#include <bits/stdc++.h>
using namespace std;

int		smallest_pair(int a[], int n)
{
	int min = INT_MAX, secondMin = INT_MAX;
	for (int j = 0; j < n; j++)
	{
		if (a[j] < min)
		{
			secondMin = min;
			min = a[j];
		}
		else if ((a[j] < secondMin) && a[j] != min)
			secondMin = a[j];
	}
	return (secondMin + min);
}

int		main()
{
	int t;
	cin >> t;
	int tab[t];
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int j = 0; j < n; j++)
			cin >> arr[j];
		tab[i] = smallest_pair(arr, n);
	}
	for (int i = 0;i < t; i++)
		printf("%d\n", tab[i]);
	return (0);
}
