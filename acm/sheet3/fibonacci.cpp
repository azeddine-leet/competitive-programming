#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int  i = 0, n = 0;
	long long ret = 0, n1 = 0, n2 = 1;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%c", '0');
		return (0);
	}
	if (n == 2)
	{
		printf("%c", '1');
		return (0);
	}
	for (i = 2; i < n; i++)
	{ 
		ret = n1 + n2;
		n1 = n2;
		n2 = ret;
	}
	printf("%lld", ret);
	return (0);
}
