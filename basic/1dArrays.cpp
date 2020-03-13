#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

int			get2ndMax(int arr[], int size)
{
	assert(size >= 2);
	int fstMax = arr[0], secMax = arr[1];
	if (fstMax < secMax)
		swap(fstMax, secMax);
	for (int i = 2; i < size; ++i)
	{
		if (arr[i] > fstMax)
		{
			secMax = fstMax;
			fstMax = arr[i];
		}
		else if (arr[i] > secMax)
			secMax = arr[i];
		else
			;
	}
	return (secMax);
}
