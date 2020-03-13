#include <iostream>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int		main()
{
	repeat (4)
	{
		haut();
		repeat (8)
			droite();
		haut();
		repeat (8)
			gauche();
	}
	haut();
	repeat (9)
		droite();
	repeat (9)
		bas();
	repeat (9)
		gauche();
	return (0);
}
