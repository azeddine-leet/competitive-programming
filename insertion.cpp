#include <iostream>
#include <cstdio>

using namespace std;
int  	main()
{
	int nb, i, j;
	scanf("%d", &nb);
	long tab[nb];
	for (i = 0; i < nb; i++)
		scanf("%ld", &tab[i]);
	i = 0, j = 0;
	while (i < nb) {
		j = i + 1;
		while (j > 0 && tab[j] < tab[j-1]) {
			int tmp;
			tmp = tab[j];
			tab[j] = tab[j-1];
			tab[j-1] = tmp;
			j--;
		}
		i++;
	}
	for (i = 0; i < nb; i++) {
		printf("%ld", tab[i]);
		if (i + 1 < nb)
			printf (" ");
	}
	return (0);
}
