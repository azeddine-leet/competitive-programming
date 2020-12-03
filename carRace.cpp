#include <cstdio>
#include <iostream>
#define N 1000

int cros[2][N*N] = {{0,0}};
int pos[1000] = {0};

int   minPosition(int *tab, int i, int n)
{
   int imin = i;
   while (i < n) {
      if ( tab[i] < tab[imin])
         imin = i;
      i++;
   }
   return (imin);
}

using namespace std;
int   main()
{
   int nbCars;
   scanf("%d", &nbCars);
   for (int i = 0; i < nbCars; i++)
      scanf("%d", &pos[i]);
   int k = 0;
   for (int i = 0; i < nbCars; i++) {
      int j = minPosition(pos, i, nbCars);
	  while (j-1 >= 0 && pos[j] < pos[j - 1]) {
		  cros[0][k] = pos[j-1];
		  cros[1][k] = pos[j];
		  int tmp;
		  tmp = pos[j];
		  pos[j] = pos[j-1];
		  pos[j-1] = tmp;
		  k++;
		  j--;
      }
   }
   printf("%d\n", k);
   for (int i = 0; i < k; i++)
	   printf("%d %d\n", cros[0][i], cros[1][i]);
   return (0);
}
