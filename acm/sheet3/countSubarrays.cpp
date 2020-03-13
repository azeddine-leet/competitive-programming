#include <bits/stdc++.h>
using namespace std;

int		count(vector <int>arr, int size)
{
	int cpt = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = size - i - 1; j >= 0; j--)
		{
			if(is_sorted(arr.begin()+i, arr.end()-j) == 1)
				cpt ++;
		}
	}
	return (cpt);
}

int		main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector <int>arr(n);
		for (int j = 0; j < n; j++)
			cin >> arr[j];
		cout  << count(arr, n) << "\n";

	}
	return (0);
}