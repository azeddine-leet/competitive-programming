#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0, i = 0;
	long long  arr[1000];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> arr[ i];
	for (i = i - 1; i >= 0; i--)
	{
		cout << arr[i];
		if (i > 0)
			cout << ' ';
	}
	return (0);
}
