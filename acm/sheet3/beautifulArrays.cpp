#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int n = 0;
	int ntests = 0;
	int flag = 1;
	scanf("%d", &ntests);
	while (ntests--)
	{
		scanf("%d", &n);
		int zeros = 0, ones = 0, minus_ones = 0, others = 0;
		int x;
		while (n--)
		{
			scanf("%d", &x);
			if (x == 0) zeros++;
			else if (x == 1) ones++;
			else if (x == -1) minus_ones++;
			else others++;
		}
		if ((others > 1) || (minus_ones != 0 && others != 0) ||
				(ones == 0 && minus_ones > 1))
			flag = 0;

		if (flag == 1) printf("yes\n");
		else printf("no\n");
	}
	return (0);
}
