#include <iostream>
using namespace std;
int		main()
{
	int n = 0, cpt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			cpt++;
		}
	}
	if (cpt == 0)
		cout << "-1" << endl;
	return (0);
}
