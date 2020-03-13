#include <iostream>
using namespace std;
int		main()
{
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z')
		cout << "IS SMALL" << endl;
	else if (c >= 'A' && c <= 'Z')
		cout << "IS CAPITAL" << endl;
	return (0);
}
