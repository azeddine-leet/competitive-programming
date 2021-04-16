#include <cstdio>
#define MAX (100 * 1000)
using namespace std;

int forces[MAX] = {0};

int      subArraySum(int i, int k)
{
   int ret = 0, j;
   for (j = 0; j < k; j++) {
      ret += forces[i+j];
      printf("[%d]", forces[i+j]);
   }
   printf("==>%d\n", ret);

   return (ret);
}

int main()
{
   int k, n,sum = 0, newMax;
   scanf("%d%d", &k , &n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &forces[i]);
   }
   for (int i = 0; i < n && i + k -1 < n; i++) {
      newMax = 0;
      newMax += subArraySum(i, k);
      if (sum <newMax)
         sum = newMax;
   }
   printf("%d\n", sum);
   return (0);
}
