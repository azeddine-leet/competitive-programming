#include <iostream>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
using namespace std;
int main()
{
	int i = 1 , j = 1 ;
	repeat (20)
	{
		j = 1;
		repeat (20)
		{
			cout << i * j << " ";
			j++;
		}
		cout << endl;
		i++;
	}
	return (0);
}
