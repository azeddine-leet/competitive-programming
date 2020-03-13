#include <iostream>
#include <vector>
using namespace std;
int		main()
{
	int n = 0;
	vector<int> tab;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
			tab.push_back(i);
	}
	for (int i = 0; i < tab.size(); i++)
		cout << tab[i] <<endl;
	return (0);
}
