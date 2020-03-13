#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int		n, k, mod;

	cin >> n >> k;
	while (k)
	{
		mod = n % 10;
		if (k <= mod)
		{
			cout << n - k << endl;
			return (0);
		}
		n /= 10;
		k = k - mod - 1;
	}
	cout << n << endl;
	return (0);
}
