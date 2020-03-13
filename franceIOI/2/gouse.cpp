#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;

int		main()
{
	repeat (16)
	{
		droite ();
		ramasser ();
	}
	deposer ();
	return (0);
}
