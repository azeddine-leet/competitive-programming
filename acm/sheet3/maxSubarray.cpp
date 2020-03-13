#include <bits/stdc++.h>
using namespace std;

void		maxArray(vector <int>arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - i - 1; j >= 0; j--)
		{
			cout << *max_element(arr.begin()+i, arr.end()-j);
			if (i != size - 1)
				cout << ' ';
		}
	}
	cout << "\n";
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
		maxArray(arr, n);

	}
	return (0);
}
