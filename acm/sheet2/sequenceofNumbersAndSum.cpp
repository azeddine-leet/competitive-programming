#include <iostream>
using namespace std;
int		main()
{
	int m = 0, n = 0, cpt = 0, min = 0, max = 0;
	long long sum = 0;
	while (1)
	{
		cin >> m >> n;
		if (m <= 0 || n <= 0)
			return (0);
		else 
		{
			min = m;
			max = n;
			if (n < m)
			{
				min = n;
				max  = m;
			}

			sum = 0;
			for (int i = min ; i <= max; i++)	
			{
				cout << i << " ";
				sum += i;
			}
			cout << "sum =" << sum << endl;
		}

	}
	return (0);
}
