#include <iostream>
using namespace std;

void indentation(int nb)
{
	int i = 0;
	while (i <  3 - nb) {
		cout << '\t';
		i++;
	}
}

void startEnd(int nb)
{
	indentation(nb);
	cout << "Start" << nb << '\n';
	if (nb > 1) {
		startEnd(nb - 1);
		startEnd(nb - 1);
	}
	indentation(nb);
	cout << "End" << nb << '\n';
}


int main()
{
	startEnd(0);
	return (0);
}
