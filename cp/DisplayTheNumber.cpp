#include <bits/stdc++.h>
using namespace std;

void	displayn(int n)
{
	if (n % 2 == 0)
	{	
		for (int j = 0; j < n/2; j++)
			cout << 1;
	}
	else 
	{
		cout << 7;
		 for (int j = 0; j < n/2 - 1; j++)
			      cout << 1;
	}

}

int		main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		displayn(n);
		cout << "\n";
	}
	return (0);
}
