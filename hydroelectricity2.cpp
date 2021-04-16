#include <cstdio>
using namespace std;
int main()
{
	int k, n;
	scanf("%d%d", &k, &n);
	int forces[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &forces[i]);
	int i, maxSum = 0, newMaxSum = 0, previouSum = 0;
	for (i = 0; i < k; i++)
		previouSum += forces[i];
	maxSum = previouSum;
	i = 1;
	while (i+k-1 < n) {
		newMaxSum = 0;
		newMaxSum += (forces[i+k-1] + previouSum - forces[i-1]);
		previouSum = newMaxSum;
		if (newMaxSum > maxSum)
			maxSum = newMaxSum;
		i += 1;
	}
	printf ("%d\n", maxSum);
	return (0);
}
