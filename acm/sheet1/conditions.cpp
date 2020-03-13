#include <iostream>
using namespace std;
int	main()
{
	long long  want_buy = 0, jars_of_seller = 0;
	cin >> jars_of_seller >> want_buy;
	(want_buy <= jars_of_seller) ? (cout << "Yes\n") : (cout << "No\n");
	return (0);
}
