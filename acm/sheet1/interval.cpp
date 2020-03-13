#include <iostream>
using namespace std;
int main()
{
	float nbr;
	cin >> nbr;
	if (nbr >= 0 && nbr <= 25)
		cout << "Intervalo [0,25]\n";
	else if (nbr > 25 && nbr <= 50)
		cout << "Intervalo (25,50]\n";
	else if (nbr > 50 && nbr <= 75)
		cout << "Intervalo (50,75]" << endl;
	else if (nbr > 75 && nbr  <= 100)
		cout << "Intervalo (75,100]" << endl;
	else
		cout << "Fora de intervalo" << endl;
	return (0);
}
