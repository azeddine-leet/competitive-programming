#include <cstdio>
#include <cstdlib>
using namespace std;

const int MAX_SIZE = 250;
char image[MAX_SIZE][MAX_SIZE+1];
int nbIterations,hauteur,largeur;
char h = '#';

int 	clear(int i, int j)
{
	if (i - 1 < 0 || (i - 1 >= 0 && image[i - 1][j] != h))
		return (1);
	if (i + 1 >= hauteur || (i + 1 < hauteur && image[i + 1][j] != h))
		return (1);
	if (j - 1 < 0 ||  (j - 1 >= 0 && image[i][j - 1] != h))
		return (1);
	if (j + 1 >= largeur || (j + 1 < largeur && image[i][j + 1] != h))
		return (1);
	return (0);
}

int 	main()
{
	// lecture de l'entrée
	scanf("%d%d%d", &nbIterations, &hauteur, &largeur);
	char tmp[hauteur][largeur+1];
	for (int ligne = 0; ligne < hauteur; ligne++)
		scanf("%s", image[ligne]);
	//printf("Befor erosion: \n");
	//for (int ligne = 0; ligne < hauteur; ligne++)
	//    printf("%s\n", image[ligne]);
	//printf("\n");
	for (int iIteration = 0; iIteration < nbIterations; iIteration++) {
		for (int i = 0 ; i < hauteur; i++) {
			for (int j = 0; j < largeur ; j++) {
				if (image[i][j] == '#')
					if (clear(i, j)) {
						tmp[i][j] = '.';
					}
					else
						tmp[i][j] = image[i][j];
				else
					tmp[i][j] = '.';
			}
		}
		for (int k = 0; k < hauteur; k++)
			for (int l = 0; l < largeur; l++)
				image[k][l] = tmp[k][l];
	}

	// affichage de la sortie
	//printf("After erosion: \n");
	for (int ligne = 0; ligne < hauteur; ligne++)
		printf("%s\n", image[ligne]);
	return 0;
}
