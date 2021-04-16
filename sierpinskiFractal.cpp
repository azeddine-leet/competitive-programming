#include <iostream>
using namespace std;

#define N 64

int map[N][N] = {0};

void		drawFractal(int x1, int z1, int x2, int z2)
{
	if (x2 - x1 == 1 && z2 - z1 == 1)
	{
		map[x1][z1] = 1;
		map[x1][z2] = 1;
		map[x2][z1] = 1;
		map[x2][z2] = 0;
		return ;
	}
	drawFractal(x1, z1, x1 +(x2-x1)/2, z1 + (z2-z1)/2);
	drawFractal(x1 + (x2-x1)/2 +1, z1, x2, z1+(z2-z1)/2);
	drawFractal(x1, z1+(z2-z1)/2 + 1, x1 + (x2-x1)/2, z2);
}

void		printFractal(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (map[i][j])
				cout << '#';
			else
				cout << ' ';
		}
		cout << '\n';
	}
}

int			main(void)
{
	int n;
	cin >> n;
	drawFractal(0, 0, n-1, n-1);
	printFractal(n);
	return (0);
}
