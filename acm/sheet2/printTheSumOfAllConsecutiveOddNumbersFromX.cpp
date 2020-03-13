#include <iostream>
using namespace std;
int			main()
{
	int nbr = 0, x = 0, y = 0;
	cin >> nbr;
	for (int i = 0; i < nbr ; i++)
	{
		cin >> x >> y;
		 int sum = 0;
		while (y)
		{
			if (x % 2 == 0)
				x++;
			else
			{
				sum += x;
				x += 2;
				y--;
			}
		}
		cout << sum << endl;
	}
	return (0);
}
