#include <iostream>
using namespace std;
int		main()
{
	int tab1[3],tab2[3];
	int tmp = 0, i= 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		cin >> tab1[i];
		tab2[i] = tab1[i];
	}

	for (i = 0; i < 3; i++)
	{
		for (j = i; j < 3; j++)
		{
			if (tab1[i] >  tab1[j])
			{
				tmp = tab1[i];
				tab1[i] = tab1[j];
				tab1[j] = tmp;
			}
		}
	}
	for (i = 0; i < 3; i++)
		cout << tab1[i] << endl;
	cout << endl;
	for (i = 0; i < 3; i++)
		cout << tab2[i] << endl;
	return (0);
}
