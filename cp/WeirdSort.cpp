#include <bits/stdc++.h>
using namespace std;
int 		send_position(char c)
{
	int ret = 0;
	if (c >= 'a' && c <= 'z')
		return (c - 'a');
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A');
	return 0;
}
int 		main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t, j, m , n;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int ret[26] = {0};
		cin  >> n >> m;
		int tab[m];
		string str;
		cin >> str;
		for (j = 0; j < m; j++)
			cin >> tab[j];
		sort(tab, tab+m);
		for (int k = 0; k < m; k++)
		{
			for (int f = 0; f < tab[k]; f++)
			{
				int pos = send_position(str[f]);
				ret[pos] = ret[pos] + 1;
			}
		}
		for (int k = 0; k < str.size(); k++)
		{
			int pos = send_position(str[k]);
			ret[pos] = ret[pos] + 1;
		}
		for(j = 0; j < 26; j++)
		{
			cout << ret[j];
			if (j < 25)
				cout << " ";
		}
		cout << '\n';
	}
	return (0);
}
