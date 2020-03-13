#include <iostream>
using namespace std;

int		count_ones(long long nbr)
{
	int cpt = 0;
	while (nbr)
	{
		if (nbr % 2 == 1)
			cpt ++;
		nbr /= 2; 
	}
	return (cpt);
}

int		main()
{
	int t = 0;
	long long n = 0, ret = 0, cpt = 1;
	cin >> t;
	for (int i = 0; i < t ; i ++)
	{
		cin >> n;
		int ones = count_ones(n);
		while (ones)
		{
			ret += cpt;
			cpt *= 2;
			ones--;
		}
		cout << ret << endl;
		ret = 0;
		cpt = 1;
	}
	return (0);
}

