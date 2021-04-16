#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main()
{
    int x_1;
    int y_1;
    scanf("%d%d", &x_1, &y_1);
    int x_2;
    int y_2;
    scanf("%d%d", &x_2, &y_2);

   
    double x = (double)(x_1 + x_2)/2;
    double y = (double)(y_1 + y_2)/2;
    printf("%g %g\n", x, y);

    return 0;
}
