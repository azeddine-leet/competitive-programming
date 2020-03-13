#include <iostream>
#include <iomanip>

using namespace std;
int		main()
{
	cout << fixed << setprecision(9);
	double pi = 3.14159;
	double r;
	cin >> r;
	cout << "Area = " << (pi * r * r) << endl;
	return (0);
}
