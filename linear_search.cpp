#include <iostream>
using namespace std;

bool	search(int target, int *arr)
{
	for (int i = 0; i < 7; i++)
		if (arr[i] == target)
		{
			cout << "Found at position: " << i+1 << '\n';
			 return (true);
		}
	cout << "Not Found\n";
	return (false);
}

int main()
{
	int arr[] = {4, 6, 8, 2, 7, 5, 0};
	int *ptr = arr;
	cout << search(10, arr) << endl;
	return (0);
}

