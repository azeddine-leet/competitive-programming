#include <bits/stdc++.h>
using namespace std;
int			main()
{
	int nbr = 0, n = 0, m = 0, i = 0, j = 0;
	cin >> n >> m;
	int matrix[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cin >> matrix[i][j]; 
	}
	cin >> nbr;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (matrix[i][j] == nbr)
			{
				cout << "will not take number";
				return (0);
			}
		}
	}
	cout << "will take number";
	return (0);
}
