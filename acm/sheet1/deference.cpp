#include <iostream>
using namespace std;
int		main()
{
	long long a = 0, b = 0, c = 0, d = 0;
 	long long  res = 0;
	
	cin >> a >> b >> c >> d;
	res = (a * b) - (c * d);
	cout << "Difference = " << res << endl;
	return (0);
}
