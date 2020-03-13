#include <iostream>
using namespace std;
int		main()
{
	int tab[4], min ,max;
	for (int i = 0; i < 4 ; i++)
		cin >> tab[i];
	min = tab[0];
	max = tab[0];
	for (int i = 0; i < 4 ; i++)
	{
		if (tab[i] < min)
			min = tab[i];
		if (tab[i] > max )
			max = tab[i];
	}
	cout << min << " " << max << endl;
	return (0);
}
