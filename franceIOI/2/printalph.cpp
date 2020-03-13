#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int      main()
{
	char c = 'a';
	repeat(3)
	{
		repeat(30)
		{
			cout << c << "_";
		}
		cout << endl;
		c++;
	}
}
