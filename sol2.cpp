#include <cstdio>
#define N 64

int carre[N][N];

int main(void)
{
	int lig, col, n;
	scanf("%d", &n);
	int cote = 1;
	**carre = 1;
	while (cote < n) {
		for (lig = 0; lig < cote; lig++)
			for (col = 0; col < cote; col++)
			{
				carre[lig][col + cote] = carre[lig][col];
				carre[lig + cote][col] = carre[lig][col];
			}
		cote *= 2;
	}
	for (lig = 0; lig < cote; lig++) {
		for (col = 0; col < cote - lig; col++)
			{
				if (carre[lig][col])
					printf("# ");
				else
					printf("  ");
			}
				printf("\n");
	}
	return 0;
}
