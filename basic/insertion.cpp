#include <iostream>
using namespace std;
void		insertion_sort(int arr[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int cpy = arr[i];
		int j = i - 1;
		for (; j >= 0;--j)
		{
			if (arr[j] < cpy)
				break ;
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = cpy;
	}
}
