#include <iostream>
using namespace std;

int		main()
{
	int t = 0;
	long long nb = 0;
	cin >> t;
	char tab[t][25];
	for (int i = 0; i < t; i++)
	{
		cin >> nb;
		int j = 0;
		while (nb)
		{
			tab[i][j] = (nb%2) + 48;
			nb /=2;
			j++;
		}
		tab[i][j] = '\0';
	}
	for (int i = 0; i < t; i++)
	{
		int j = 0;
		while (tab[i][j] != '\0')
		{
			cout << tab[i][j];
			j++;
		}
		cout << endl;
	}
	return (0);
}
