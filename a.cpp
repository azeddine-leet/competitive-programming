//#include <bits/stc++.h>
#include <iostream>

using namespace std;
int			main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 0, n , m;
	cin >> t;
	while (t--)
	{
		int sum = 0;
		cin >> n  >> m;
		int tab[n];
		for (int i = 0; i < n ; i++)
			cin >> tab[i], sum += tab[i];
		if (m <= sum)
			cout  << m << endl;
		else 
			cout << sum << endl;
	}
	return 0;
}
