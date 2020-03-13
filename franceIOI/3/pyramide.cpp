#include <iostream>
using namespace std;
int main()
{
	int nbDeCube = 0, i;
	for (i = 17; i >= 1; i-=2)
	{
		cout << "--- > i = "<< i << endl;
		nbDeCube = nbDeCube + (i  * i * i);
	}
	cout << nbDeCube << endl;
	return (0);
}
