#include <iostream>
using namespace std;

int tab[64][64];
int n;


char 	**drawFractal()
{

}

void	prinTab()
{
	int i = 0, j = 0;
	while (i < n) {
		j = 0;
		while (j < n -i) 
			cout << tab[i][j];
		cout << '\n';
	}
}


int 	main()
{
	
	int n;
	cin >> n;
	drawFractal(n);
	return (0);
}
