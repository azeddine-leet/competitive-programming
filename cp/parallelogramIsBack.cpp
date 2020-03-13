#include <iostream>
using namespace std;
int	main()
{
	int a[3][2];

	scanf("%d%d", a[0], a[0]+1);
	scanf("%d%d", a[1], a[1]+1);
	scanf("%d%d", a[2], a[2]+1);
	printf("3\n");
	printf("%d %d\n", (a[0][0] + a[1][0] - a[2][0]), (a[0][1] + a[1][1] - a[2][1]));
	printf("%d %d\n", (a[2][0] + a[0][0] - a[1][0]), (a[2][1] + a[0][1] - a[1][1]));
	printf("%d %d\n",(a[1][0] + a[2][0] - a[0][0]), (a[1][1] + a[2][1] - a[0][1]) );
	return (0);
}
