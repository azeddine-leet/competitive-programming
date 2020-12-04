#include <cstdio>
#include <iostream>
using namespace std;

struct bacs {
	int id;
	int nivPollution;
};


bool    comp(bacs num1, bacs num2)
{
    if (num1.nivPollution != num2.nivPollution)
        return (num1.nivPollution < num2.nivPollution);
    return (num1.id < num2.id);
}

int			main()
{
	int nbBacs;
	scanf("%d", &nbBacs);
	bacs arr[nbBacs];
	for (int i = 0; i < nbBacs; i++)
		scanf("%d%d", &arr[i].id, &arr[i].nivPollution);

	sort (arr, arr+nbBacs, comp);
	for (int i = 0; i < nbBacs; i++)
		printf("%d %d\n", arr[i].id, arr[i].nivPollution);
	return (0);
}
