#include <iostream>
using namespace std;
int		main()
{
	int t = 0;
	cin >> t;
	char extract[t][11];
	for (int i = 0; i < t; i++)
		cin >> extract[i];
	for (int i = 0; i < t; i++)
	{
		int j = 0;
		while (extract[i][j])
		{
			cout << extract[i][j];
			if (extract[i][j + 1] != '\0')
				cout << " ";
			j++;
		}
		cout << endl;
	}
	return (0);
}
