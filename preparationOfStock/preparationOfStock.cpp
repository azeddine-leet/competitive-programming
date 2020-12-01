#include <cstdio>
#include <iostream>
using namespace std;

int 	main()
{
	int tab[6000] = {0};
	int n,m, i, j;
	scanf("%d%d", &n, &m);
	int ret[m];
	for (int i = 0; i < n; i++) {
		scanf("%d", &tab[i]);
	}
	int tmp;
	int tmp2;
	for (i = 0; i < m; i++) {
		scanf("%d", &tmp);
		j = 0;
		while (j < i + n && tmp > tab[j])
	   		j++;
		ret[i] = j;
		while (j < n + i)  {
			if (tmp <= tab[j]) {
				tmp2 = tab[j];
				tab[j] = tmp;
				tmp = tmp2;
			}
			j++;
		}
		tab[j] = tmp;
	}
	for (j = 0; j < m; j++) {
		printf("%d", ret[j]);
		if (j + 1 < m)
			printf(" ");
	}
	printf("\n");
	for (i = 0; i < n+m; i++) {
		printf("%d", tab[i]);
		if (i + 1 < n + m)
			printf(" ");
	}
	return (0);
}
