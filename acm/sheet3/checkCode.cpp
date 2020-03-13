#include <bits/stdc++.h>
using namespace std;
int			main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, len;
	cin >> a >> b;
	char code[a + b + 1];
	cin >> code;
	if (code[a] != '-') 
	{
		cout << "No";
		return (0);
	}
	len = a + b + 1;
	for (int i = 0; i < len ; i ++)
	{
		if (i != a && (code[i] < '0' || code[i] > '9'))
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}
