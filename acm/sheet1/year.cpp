#include <iostream>
using namespace std;
int		main()
{
	char tab[12][10] = {"January", "February", "March", "April" , "May" , "June" , "July" , "August", "September", "October", "November", "December"};
	int nb = 0;
	cin >> nb;
	cout << tab[nb - 1] << endl;
	return  (0);
}
