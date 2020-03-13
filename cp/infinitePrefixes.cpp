#include <bits/stdc++.h>
using namespace std;
int		main()
{
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 0;
	cin >> t;
	for (int j = 0; j < t; ++j)
	{
		long long x, ret  = 0, z = 0, o = 0;
		int n = 0;
		string s;
		cin >> n >> x;
		cin >> s;
		int arr1[n];
		int arr2[n];
		arr1[0] = s[0] == '0' ? 1 : 0;
		if (s[0] == '0')
			z++;
		else
			o++;
		arr2[n - 1] = s[n - 1] == '0' ? 1 : 0;
		for (int i = 1; i < n; ++i)
		{
			if (s[i] == '0')
			{
				z++;
				arr1[i] = arr1[i - 1] + 1;
			}
			else
			{
				o++;
				arr1[i] = arr1[i - 1] - 1;
			}
			if (i < n - 1 && arr1[i] == 0)
				++ret;
		}
		if (z-o == 0)
		{
			cout << -1 << "\n";
			continue;
		}
		else if (z-o < 0)
		{
			cout << 0 << "\n";
			continue;
		}
		for (int i = n - 2; i >= 0; --i)
		{
			if (s[i] == '0')
				arr2[i] = arr2[i + 1] + 1;
			else
				arr2[i] = arr2[i + 1] - 1;
			if (i > 0 && arr2[i] == 0)
				++ret;
		}
		cout << ret + 1 << "\n";
	}
	return (0);
}
