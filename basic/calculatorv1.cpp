#include <iostream>

using namespace std;
int		main()
{
	double nb1 = 0;
	double nb2 = 2;
	double result = 0;
	int choice = 0;
	
	cout << "\t\t\tWelcome in calculator V1\n\n\n";
	renterTheNumbers :
	cout << "Enter 2 numbers" << endl;
	cin >> nb1 >> nb2;
	if (cin.fail())
	{
		cout << "please Enter a valid number :"<< endl;
		cin.clear();
		cin.ignore(10000, '\n');
		goto renterTheNumbers;
	}

	makeAchoice :
	cout << "\t*****Menu****" << endl;
	cout << "\tEnter 1 for +" << endl;
	cout << "\tEnter 2 for -" << endl;
	cout << "\tEnter 3 for *" << endl;
	cout << "\tEnter 4 for /" << endl;
	cout << "\tEnter 5 for another numbers " << endl;
	cout << "Enter a choice : ";
	cin >> choice ;
	if (cin.fail())
	{
		cout << "Enter a choice between 1-5 " << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		goto makeAchoice ;
	}
	if (choice == 1)
		result = nb1 + nb2;
	else if (choice == 2)
		result = nb1 - nb2;
	else if (choice == 3)
		result = nb1 * nb2;
	else if (choice == 4)
	{
		if (nb2 == 0)
		{
			cout << "can't divide by zero ,enter another 2 num" << endl;
			goto renterTheNumbers ;
		}
		result = nb1 / nb2;
	}
	else if (choice == 5)
		goto  renterTheNumbers ;
	else 
	{
		cout << "Enter a valid choice" << endl;
		goto makeAchoice ;
	}
	cout << "The result is : " << result << endl;
	return (0);
}
