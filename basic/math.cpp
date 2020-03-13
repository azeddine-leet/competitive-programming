#include <iostream>
using namespace std;

int		main()
{
	int number1 = 5;
	int number2 = 3;

	int value = number1 + number2;
	cout << "number1 value = " << number1 << endl;
	cout << "number2 value = " << number2 << endl;
	cout << number1 << " + " << number2 << " = " << value << endl;
	cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
	value = number1 - number2;
	cout << number1 << " - " << number2 << " = " << value << endl;
	return (0);
}
