#include <bits/stdc++.h>
using namespace std;
int		main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 0, ma, need = 0;
	cin >> t;
	int arr[4];
	for (int i = 0; i < t ; i++)
	{
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		ma = max(max(arr[0], arr[1]), arr[2]);
		need = (ma - arr[0]) + (ma - arr[1]) + (ma - arr[2]);
		if ((arr[3] - need >= 0) && (arr[3] - need)%3 == 0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
