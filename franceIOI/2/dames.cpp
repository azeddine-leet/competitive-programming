#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int		main()
{
	char begin = 'O', sec = 'X';
	repeat(40)
	{
		repeat(40)
		{
			cout << begin;
			swap(begin, sec);

		}
		swap(begin , sec);
		cout << endl;
	}
	return (0);
}
