#include <cstdio>
#define MAX (1000*1000)
using namespace std; 
int main()
{
	int n;
	int arr[MAX] = {-1};
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		if (tmp == arr[tmp]) {
			printf("%d\n", tmp);
			return (0);
		}	
		else 
			arr[tmp] = tmp;
	}
	printf("%d\n", -1);
	return (0);
}

