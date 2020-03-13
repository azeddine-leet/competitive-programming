#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
	int nb_crapauds = 1337;
	repeat (12)
		nb_crapauds = nb_crapauds * 2;
	cout << nb_crapauds << endl;
	return (0);
}
