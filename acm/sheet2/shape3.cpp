#include <iostream>
using namespace std;
int			main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);   
	int n = 0, j = 0, i = 0, k = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n - 1; j++)
			cout << " ";
		for (k = 1; k <= 2*i - 1; k++)
			cout << "*";
		cout << endl;
	}
	for(i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
			cout << " ";
		for (k = j; k <= 2*n - j; k++)
			cout << "*";
		cout << endl;

	}
	return (0);
}
