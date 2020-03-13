#include <iostream>

using namespace std;
int		main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int arr[n];
		int zeros = 0, pos = 0, neg = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			(arr[j] > 0) ? pos += arr[j] : ((arr[j] < 0) ? neg += arr[j] : zeros++);
		}	
		if (zeros + pos + neg == 0)
			cout << ++zeros << '\n';
		else 
			cout << zeros << '\n';
	}
	return (0);
}
