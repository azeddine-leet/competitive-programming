#include <iostream>
using namespace std;
int			main()
{
	int n = 0, k = 1;
		static int tmp = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1 ; j < n - i; j++)
			cout << " ";
		tmp = k;
		while (k) 
		{
			cout << "*";
			k--;
		}
		k = tmp + 2; 
		cout << endl;
	}
	return (0);
}
