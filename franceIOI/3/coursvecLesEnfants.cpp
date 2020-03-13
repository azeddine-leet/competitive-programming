#include <iostream>
#include "robot.h"
using namespace std;
int main()
{
	int i, j;
	for (i = 1; i <= 10; i++ )
	{
		for (j = 1; j <= i; j++)
			droite();
		ramasser();
		for (j = 1; j <= i; j++)
			gauche();
		deposer();
	}
	return (0);
}
