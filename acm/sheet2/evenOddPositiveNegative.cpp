#include <iostream>
using namespace std;
int main()
{
	int n = 0,var = 0, o = 0, e = 0, p = 0, ne = 0;
	cin >> n;
	for (int i =0; i < n; i++)
	{
		cin >> var;
		if (var  < 0)
			ne++;
		else if (var > 0)
			p++;
		if (var % 2 == 0)
			e++;
		else 
			o++;
	}
	cout <<  "Even: " << e << endl;
	cout << "Odd: " << o << endl;
	cout << "Positive: " << p << endl;
	cout << "Negative: " << ne << endl;
	return (0);
}

