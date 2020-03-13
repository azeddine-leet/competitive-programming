#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0;
	cin >> n;
	int arr[n], freq = 0, min;
	for (int i = 0; i < n; i ++)
		cin >> arr[i];
	sort(arr, arr + n);
	min = arr[0];
	int j = 0;
	while (arr[j] == min && j < n)
	{
		freq ++;
		j++;
	}
	(freq % 2) ? cout << "Lucky" : cout << "Unlucky";
	return (0);
}
