#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0,arr[1000], i = 0, j = 0, tmp = 0; 
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (i = 0; i < n; i++)
	{
		for (j  = i; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i < n)
			cout << ' ';
	}
	return (0);
}
