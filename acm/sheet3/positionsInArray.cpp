#include <iostream>
#include <cstdio>
using namespace std;
int     main()
{
   int nb = 0, tmp = 0;
   cin >> nb;
   for (int i = 0; i < nb; i++) 
   {
       cin >> tmp;
       if (tmp <= 10)
            printf("A[%d] = %d\n", i, tmp);
   }
    return (0);
}