#include <iostream>
using namespace std;

int	main()
{
	int len, D = 0, R = 0, j =0;
	char c;
	scanf("%d", &len);
	char s[len];
	scanf("%s", s);
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'D')
			D++;
		if (s[i] == 'R')
			R++;
	}
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'D' || s[i] == 'R')
		{
			c = s[i];
		   j = 0;	
			while (j < len)
			{
				if (s[j] != c && s[j] != 'a')
				{
					s[j] == 'D' ? D-- : R--;
					s[j] = 'a';
					break ;
				}
				j++;
			}
		if (D == 0 || R == 0)
			break;
		if (i+1 == len)
			i = 0;
		}
	}
	printf("%c", R == 0 ? 'D' : 'R');
	return (0);
}
