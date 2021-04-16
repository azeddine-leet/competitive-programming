#include <iostream>

using namespace std;
void	frameNumber(int nb, int nbOfBrackets)
{
	if (nbOfBrackets == 0) {
		cout << nb;
		return ;
	}
	cout << '[';
	frameNumber(nb, nbOfBrackets -1);
	cout << ']';
}

int main()
{
	int nb, nbOfBrackets;
	cin >> nb >> nbOfBrackets;
	frameNumber(nb, nbOfBrackets);
	cout << '\n';
	return (0);
}
