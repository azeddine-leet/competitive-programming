#include <bits/stdc++.h>
using namespace std;
int		main()
{
	int nb = 0, ret = 0, min = INT_MAX;
	int nbr = 0;
	scanf("%d", &nb);
	for (int i = 0; i < nb; i++)
	{
		scanf("%d", &nbr);
		ret = 0;
		while (nbr%2 == 0 && nbr > 0)
		{
			ret++;
			nbr /= 2;
		}
		if (ret < min)
			min = ret;
	}
	printf("%d", min);
	return (0);
}
