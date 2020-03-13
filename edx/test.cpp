#include <stdio.h>

using namespace std;
int		main()
{
	FILE *inf = fopen("input.txt", "r");
	FILE *ouf = fopen("output.txt", "w");

	int a, b;
	fscanf(inf, "%d%d", &a, &b);
	fprintf(ouf, "%d\n", a+b);
	return (0);
}
