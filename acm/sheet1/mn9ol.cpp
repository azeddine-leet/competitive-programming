#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double number1, number2;
	double sum=0;
	cin >> number1 >> number2;
	if (number1 == 1){
		sum = number2 * 4.00;
		cout << "Total: R " << fixed << setprecision(2) << sum << endl;
	}
	else if (number1 == 2){
		sum = number2 * 4.50;
		cout << "Total: R " << fixed << setprecision(2) << sum << endl;
	}
	else if (number1 == 3){
		sum = number2 * 5.00;
		cout << "Total: R " << fixed << setprecision(2) << sum << endl;
	}
	else if (number1 == 4){
		sum = number2 * 2.00;
		cout << "Total: R " << fixed << setprecision(2) << sum << endl;
	}
	else if (number1==5){
		sum = number2 * 1.50;
		cout << "Total: R " << fixed << setprecision(2) << sum << endl;
	}
	return 0;
}
