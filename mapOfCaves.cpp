#include <cstdio>
using namespace std;
int main()
{
	int length, j = -1;
	scanf("%d", &length);
	char arr[length];
	for (int i = 0; i < length; i++) {
		char car;
		scanf("%c", &car);
		if (car == '(')
			arr[++j] = car;
		else if (car == ')')
			j--;
	}
	if (j == 0)
		printf("1\n");
	else
		printf("0\n");
	return (0);
}
