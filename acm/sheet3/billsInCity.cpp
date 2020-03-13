#include<bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0, i = 0;
	scanf("%d", &n);
	int tab[n];
	int ret = INT_MIN;
	
	for (i = 0; i < n; i++)
		scanf("%d", &tab[i]);
	for (i = 0; i < n - 1; i++)
	{
		if (ret < abs(tab[i] - tab[i+1]))
			ret = abs(tab[i] - tab[i+1]);
	}
	printf("%d", ret);
	return (0);
}
