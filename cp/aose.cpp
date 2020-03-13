#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t = 0,a , b;
	cin >> t;
	for (int i = 0; i < t; i++)	
	{
		//int x;
		cin >> a >> b;
		if (a - b == 0)
		{
			cout << 0 << '\n';
			continue ;
		}
		if (a > b)
			((a - b) % 2 == 0) ? cout << "1" << '\n' : cout << "2" << '\n';
		else if (a < b)
			(abs(a - b) % 2 == 1) ? cout << "1" << '\n' : cout << "2" << '\n';
	}
	return 0;
}
