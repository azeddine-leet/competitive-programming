#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1000

using namespace std;

struct produit{
   int opr, exp;
};

produit product[N] = {{0,0}};
int comp (produit p1, produit p2 ) 
{
    if(p1.exp == p2.exp)
        return p1.exp;
    else
        return p2.exp - p1.exp;
}


int   main()
{
   int o, i, j = -1;
   scanf("%d", &o);
   for (i = 0; i < o; i++) {
      int opration, expiration;
      scanf("%d%d", &opration, &expiration);
      if (expiration) {
         product[++j].opr = opration;
         product[j].exp = expiration;

      }
      else {
         while(opration) {
            if ((-1 * opration) < product[j].opr) {
               product[j].opr += opration;
               opration = 0;
            }
            else {
               opration += product[j].opr;
               product[j].opr = 0;
               product[j].exp = 0;
               j--;
            }
         }
      }
   }

   /*i = 0;
   int min = 99999900;
   while (i < N) {
      if (product[i].exp != 0 && product[i].exp < min) {
         min = product[i].exp;
      }

      i++;
   }
   */
   //qsort(product, product+j+1, sizeof(product[0]), comp);
   
   sort(product, product+j+1, comp);
   printf("%d\n", product[0].exp);

   //print the sort part of the array
	for (i = 0; i <= j; i++)
		printf("%d %d\n", product[i].opr, product[i].exp);
   return (0);
}
