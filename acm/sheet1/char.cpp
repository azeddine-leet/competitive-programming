#include <iostream>
using namespace std;
int	main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	else if (c >= 'A' && c <= 'Z')
		c = c + 32;
	cout << c << endl;
	return (0);
}
