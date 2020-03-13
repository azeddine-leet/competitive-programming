#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n][n];
	int i = 0, j = 0;
	int primaryDiagonal = 0;
	int secondaryDiagonal = 0;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i == j)
				primaryDiagonal += arr[i][j];
			if (i == n-j-1)
				secondaryDiagonal += arr[i][j];
		}
	}
	printf("%d", abs(primaryDiagonal - secondaryDiagonal));
	return (0);
}
