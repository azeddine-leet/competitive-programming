#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;
int main()
{
	int nb, i = 0;
	
	scanf("%d", &nb);
	int tab[nb];
	for (i = 0; i < nb; i++)
		scanf("%d", &tab[i]);
	sort(tab, tab + nb);
	for (i = 0; i < nb; i++) {
		printf("%d", tab[i]);
		if (i + 1 < nb)
			printf(" ");
	}
	return (0);
}
