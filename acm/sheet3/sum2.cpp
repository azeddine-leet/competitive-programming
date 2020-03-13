#include <bits/stdc++.h>
using namespace std;
int		main()
{
	ios_base::sync_with_stdio(false);
	int n = 0, sum = 0, i = 0;
	cin >> n;
	char arr[n];
	cin >> arr;
	while (i < n)
	{
		sum += arr[i] - '0';
		i++;
	}
	cout << sum;
	return (0);
}
