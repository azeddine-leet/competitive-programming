#include <iostream>
using namespace std;
int		main()
{
	int x = 0;

	cin >> x;
	if ((x/1000) % 2 == 0)
		cout << "EVEN" << endl;
	else
		cout << "ODD" << endl;
	return (0);
}
