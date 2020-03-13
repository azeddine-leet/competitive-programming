#include <iostream>
using namespace std;
int		main()
{
	long long tab[4],min = -1;
	int i,index = 0, winners = 1;
	char players[4][10] = {"Amr", "Waleed", "Mustafa", "Youssef"};
	for(i = 0; i < 4; i++)
		cin >> tab[i];
	min = tab[0];
	for (i = 1; i < 4; i++)
	{
		if (tab[i] <  min)
		{
			min = tab[i];
			index = i;
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (tab[i] == min && i != index)
			winners++;
	}
	if (winners == 1)
		cout << players[index] << endl;
	else 
		cout << "We are the best" << endl;
	return (0);
}
