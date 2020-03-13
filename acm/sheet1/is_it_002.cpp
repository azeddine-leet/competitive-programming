#include <iostream>

using namespace std;
int		main()
{
	int a, b , r;
	char c, equal;
	cin  >> a >> c >> b >> equal >> r;
	if (c == '+')
	{	
		if (a + b == r)
			cout << "Yes\n";
		else 
			cout << a+b << endl;
	}
	else if (c == '*')
	{
		if ( a * b == r)
			cout << "Yes\n";
		else
			cout << a * b <<endl;
	}
	else if (c == '-') 
	{
		if (a - b == r)
			cout << "Yes\n";
		else 
			cout << a - b << endl;
	}
	return (0);
}
