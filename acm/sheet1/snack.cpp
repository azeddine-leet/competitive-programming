#include <iostream>
#include <iomanip>

using namespace std;
int	main()
{
	cout << fixed << setprecision(2);
	int x;
	double tab[5] = {4.00, 4.50, 5.00, 2.00, 1.50}, y, ret = 0;
	cin >> x >> y;
	cout << "Total: R " << ((int)(tab[x - 1] * y * 100))/100.0 << endl;
	return (0);
}
