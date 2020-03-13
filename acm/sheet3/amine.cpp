#include <bits/stdc++.h>
using namespace std;

int		count(vector <int>arr, int size)
{
	int cpt = 0;
	for (int k = 1, i = 0, j = 0; j < size; i = j, j++)
	{
		if(arr[i] > arr[j])
			k = 1;
		cpt += k++;
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
