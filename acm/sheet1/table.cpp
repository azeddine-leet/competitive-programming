#include<iostream>
using namespace std;
int		main()
{
	int nbr = 0;
	cin >> nbr;
	if (nbr == 61)
	{
		cout << "Art of computer programming" << endl;
		return (0);
	}
	else if (nbr == 71)
	{
		cout << "Introduction to algorithm" << endl;
		return (0);
	}
	else if (nbr == 11)
	{
		cout << "Competitive programming" << endl;
		return (0);
	}
	else if (nbr == 29)
	{
		cout << "Programming challenges" << endl;
		return (0);
	}
	else 
		cout << "Not found" << endl;
	return (0);
}
