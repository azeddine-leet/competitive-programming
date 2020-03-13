#include <iostream>
using namespace std;
int		main()
{
	int n = 0, i = 1;
	cin >> n;
	n = n * 4;
	while (i <= n)
	{
		if (i % 4 == 0)
			cout << "PUM" << endl;
		else 
			cout << i << " ";
		i++;
	}
	return (0);
}
