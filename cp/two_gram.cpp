#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n;
	cin >> n;
	map <string, int> m;
	int max = 0;
	string s,tmp, str;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++)
	{
		tmp = s.substr(i, 2);
		m[tmp]++;
		if (max < m[tmp])
		{
			max = m[tmp];
			str = tmp;
		}	
	}
	cout << str << endl;
	return (0);
}
