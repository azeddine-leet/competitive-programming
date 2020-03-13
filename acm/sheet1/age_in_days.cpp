#include <iostream>

using namespace std;
int		main()
{
	int y = 0, m = 0, d = 0, days = 0;
	cin >> days;
	cout << (days/365) << " years\n" << (days%365)/30<< " months\n" <<((days%365)%30)<< " days" << endl;
	return (0);
}
